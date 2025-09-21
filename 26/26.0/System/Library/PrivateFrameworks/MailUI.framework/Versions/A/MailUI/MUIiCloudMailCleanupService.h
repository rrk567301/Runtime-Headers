@class NSString, NSError;
@protocol ECEmailAddressConvertible;

@interface MUIiCloudMailCleanupService : NSObject {
    void /* unknown type, empty encoding */ provider;
}

@property (class, nonatomic, readonly) BOOL isFeatureAvailable;

@property (nonatomic, readonly) BOOL isSetUp;
@property (nonatomic, readonly) NSString *statusText;

- (id)init;
- (void)prepare;
- (void).cxx_destruct;
- (void)forceSync;
- (void)setProviderDelegate:(id)a0;
- (BOOL)shouldShowICloudUnsubscribe;
- (void)acceptTip:(id)a0 completion:(id /* block */)a1;
- (void)blockSenderWithSenderEmailAddress:(id<ECEmailAddressConvertible>)a0 completionHandler:(void (^)(NSError *))a1;
- (void)dismissTip:(id)a0;
- (id)getConsentViewController;
- (id)getDashboardViewController;
- (BOOL)isConsentAccepted;
- (BOOL)isSenderEmailAddressBlocked:(id)a0;
- (BOOL)isUnsubscribeEnabled;
- (void)onAppearTip:(id)a0;
- (BOOL)shouldShowConsent;
- (id)tipForMailboxType:(id)a0 bucket:(long long)a1;
- (void)unblockSenderWithSenderEmailAddress:(id<ECEmailAddressConvertible>)a0 completionHandler:(void (^)(NSError *))a1;
- (void)updatePrimaryAccountCategoriesHidden:(BOOL)a0;

@end
