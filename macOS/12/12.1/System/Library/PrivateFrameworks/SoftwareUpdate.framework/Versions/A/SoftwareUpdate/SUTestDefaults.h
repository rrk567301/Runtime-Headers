@class NSString;

@interface SUTestDefaults : NSObject {
    NSString *_testMode;
}

+ (id)sharedDefaults;

- (void)dealloc;
- (BOOL)inDevKeyMode;
- (BOOL)inThirdPartyMode;
- (BOOL)attemptToEnterTestMode:(id)a0;
- (id)currentTestMode;
- (void)exitTestMode;
- (BOOL)inProductionMode;
- (BOOL)okayToUseNonProductionMode;
- (int)requiredPackageTrustLevelForCurrentMode;

@end
