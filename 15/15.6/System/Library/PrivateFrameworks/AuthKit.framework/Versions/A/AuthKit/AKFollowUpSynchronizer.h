@class NSString, AKAppleIDAuthenticationController;
@protocol AKFollowUpProvider;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate>

@property (retain, nonatomic) AKAppleIDAuthenticationController *controller;
@property (retain, nonatomic) id<AKFollowUpProvider> followupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSynchronizeTimeForAccount:(id)a0 inStore:(id)a1;
+ (void)updateSynchronizeTimeNoSaveForAccount:(id)a0;

- (void).cxx_destruct;
- (id)_authController;
- (char)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (char)shouldSynchronizeForAccount:(id)a0;
- (char)synchronizeFollowUpsForAccount:(id)a0 error:(id *)a1;
- (char)synchronizeFollowUpsForAccount:(id)a0 inStore:(id)a1 error:(id *)a2;

@end
