using System;
using System.Drawing;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ShapesProgram
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Timer timer = new Timer();
            timer.Interval = 1000; // Set interval to 1000 milliseconds (1 second)
            timer.Tick += Timer_Tick;
            timer.Start();
        }

        private async void Timer_Tick(object sender, EventArgs e)
        {
            Graphics graphics = CreateGraphics();

            // Draw Rectangle
            graphics.FillRectangle(Brushes.Blue, new Rectangle(10, 20, 90, 130));
            await Task.Delay(1000); // Pause for 1 second

            // Clear the screen
            graphics.Clear(BackColor);
            await Task.Delay(500); // Pause for 0.5 seconds

            // Draw Ellipse
            graphics.FillEllipse(Brushes.Green, new Rectangle(50, 50, 100, 50));
            await Task.Delay(1000); // Pause for 1 second

            // Clear the screen
            graphics.Clear(BackColor);
            await Task.Delay(500); // Pause for 0.5 seconds

            // Draw RoundRect
            graphics.FillRectangle(Brushes.Red, new Rectangle(30, 30, 90, 60));
            await Task.Delay(1000); // Pause for 1 second

            // Clear the screen
            graphics.Clear(BackColor);
        }
    }
}
