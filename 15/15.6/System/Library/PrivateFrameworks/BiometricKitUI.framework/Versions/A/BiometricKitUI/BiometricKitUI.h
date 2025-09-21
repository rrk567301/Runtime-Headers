@interface BiometricKitUI : NSObject {
    char _triggeredfromApplePay;
}

+ (id)sharedInstance;

- (id)getEnrollUIViewController:(int)a0 bundleName:(id)a1;
- (void)invalidateApplePayTrigger;
- (void)setTriggeredFromApplePay;
- (char)triggeredFromApplePay;

@end
