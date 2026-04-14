@class NSString;

@interface AppleMediaServicesUI.RegulatoryAgeVerificationWebTask : NSObject <AMSUIRegulatoryAgeVerificationMethod> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ accountParameters;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ taskPromise;
    void /* unknown type, empty encoding */ webVC;
    void /* function */ enablementBagKey;
}

@property (nonatomic, copy) NSString *enablementBagKey;

- (id)init;
- (void).cxx_destruct;
- (id)performTask;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 metrics:(id)a3 viewController:(id)a4 userInfo:(id)a5;

@end
