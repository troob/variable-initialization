// See what happens to var val when reinitialized
// CONCLUSION: reinitializating variable does NOT change its value or set it back to 0, 
// unless explicitly commanded to do so

void setup() 
{
  Serial.begin(9600);

  while(!Serial);

  displayMessage("Starting VariableInitializationTest.ino");

  for(int i=0; i < 3; i++)
  {
    int var, pulses, sample;

    displayMessage("Variable initialized");
    
    displayVar(var);

    sample = i;

    displaySample(sample);

    pulses = sample - var;

    displayPulses(pulses);

    var = sample;

    displayMessage("Variable set to sample value");
    
    displayVar(var);
  }
}

void loop() {}

void displaySample(int samp)
{
  Serial.print("Sample: ");
  Serial.println(samp);
}

void displayPulses(int ps)
{
  Serial.print("Pulses: ");
  Serial.print(ps);
  Serial.println("\n");
}

void displayVar(int v)
{
  Serial.print("Var: ");
  Serial.print(v);
  Serial.println("\n");
}

void displayMessage(String msg)
{
  Serial.print("Message: '");
  Serial.print(msg);
  Serial.println("'\n");
}
