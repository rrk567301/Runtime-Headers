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
- (id)configuration;
- (id)description;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (id)init;
- (void)flagsChanged:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetTapDefaults;
- (void)applyUserDefaults;
- (void)logAnalyticsPayload:(id)a0;

@end
