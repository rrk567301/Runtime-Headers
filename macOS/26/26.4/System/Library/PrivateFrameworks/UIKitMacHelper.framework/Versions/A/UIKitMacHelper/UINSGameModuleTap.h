@class NSString;

@interface UINSGameModuleTap : UINSGameModuleDigitizer {
    NSString *_fingerKey;
    long long _keyCode;
    long long _modifierFlagBit;
}

@property struct CGPoint { double x; double y; } normalizedLocation;
@property long long keyCode;
@property long long modifierFlagBit;

+ (id)name;

- (id)initWithConfiguration:(id)a0;
- (void)keyDown:(id)a0;
- (id)configuration;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)flagsChanged:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetTapDefaults;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;

@end
