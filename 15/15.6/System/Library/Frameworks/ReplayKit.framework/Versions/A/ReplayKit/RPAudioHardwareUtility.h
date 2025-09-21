@interface RPAudioHardwareUtility : NSObject

+ (unsigned int *)defaultOutputDeviceWithAudioBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (void)queryListOfAudioOutputDevices;
+ (char)registerDefaultOutputDeviceChangedListener:(id /* block */)a0;
+ (char)unregisterDefaultOutputDeviceChangedListener:(id /* block */)a0;

@end
