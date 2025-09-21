@class CBBlueLightClient, CBAdaptationClient, BrightnessSystemClient;

@interface CBClient : NSObject {
    BrightnessSystemClient *bsc;
}

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

+ (char)supportsAdaptation;
+ (char)supportsBlueLightReduction;

- (void)dealloc;
- (id)init;

@end
