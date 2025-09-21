@interface PLCoalitionSample : NSObject

@property unsigned long long instructions;
@property unsigned long long pInstructions;
@property unsigned long long bytesread;
@property unsigned long long byteswritten;
@property unsigned long long gpuTime;
@property unsigned long long cpuTime;
@property unsigned long long aneTime;
@property unsigned long long aneEnergy;
@property unsigned long long gpuEnergy;
@property unsigned long long cpuEnergy;
@property unsigned long long QOSUserInteractive;
@property unsigned long long QOSUserInitiated;
@property unsigned long long QOSUtility;
@property unsigned long long QOSBackground;
@property unsigned long long QOSDefault;
@property unsigned long long QOSMaintenance;
@property unsigned long long QOSUnspecified;

- (id)description;

@end
