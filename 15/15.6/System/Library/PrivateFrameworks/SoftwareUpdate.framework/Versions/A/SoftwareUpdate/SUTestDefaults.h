@class NSString;

@interface SUTestDefaults : NSObject {
    NSString *_testMode;
}

+ (id)sharedDefaults;

- (void)dealloc;
- (id)currentTestMode;
- (char)attemptToEnterTestMode:(id)a0;
- (void)exitTestMode;
- (char)inDevKeyMode;
- (char)inProductionMode;
- (char)inThirdPartyMode;
- (char)okayToUseNonProductionMode;
- (int)requiredPackageTrustLevelForCurrentMode;

@end
