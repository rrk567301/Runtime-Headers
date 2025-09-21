@interface CalCompatibility : NSObject

@property (class) char simulateLegacyBehaviors;

+ (char)isProgramSDKAtLeast:(struct { unsigned int x0; unsigned int x1; })a0;
+ (void)perform:(id /* block */)a0 whileSimulatingLegacyBehaviors:(char)a1;
+ (void)performWhileSimulatingLegacyBehaviors:(id /* block */)a0;

@end
