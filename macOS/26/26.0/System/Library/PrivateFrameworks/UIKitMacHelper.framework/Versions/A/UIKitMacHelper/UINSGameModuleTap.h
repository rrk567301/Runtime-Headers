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

- (void)keyDown:(id)a0;
- (id)init;
- (id)configuration;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)flagsChanged:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetTapDefaults;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;

@end
