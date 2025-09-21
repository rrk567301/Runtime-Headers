@class NSString, PKProvisioningAnalyticsState, PKProvisioningAnalyticsSessionProvisioningSubjectHandle, PKProvisioningAnalyticsSessionMarketingSubjectHandle, PKProvisioningAnalyticsSessionCampaignAttributionSubjectHandle;

@interface PKProvisioningAnalyticsSession : NSObject <PKProvisioningAnalyticsSessionReportingResponder> {
    PKProvisioningAnalyticsState *_state;
    PKProvisioningAnalyticsSessionProvisioningSubjectHandle *_defaultSubjectHandle;
    PKProvisioningAnalyticsSessionMarketingSubjectHandle *_marketingSubjectHandle;
    PKProvisioningAnalyticsSessionCampaignAttributionSubjectHandle *_campaignAttributionSubjectHandle;
    BOOL _didBeginWalletProvisioningSubject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)continueAnalyticsSessionForEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2 archivedParent:(id)a3;
+ (id)startAnalyticsSessionForEnvironment:(id)a0 intent:(id)a1;
+ (id)startAnalyticsSessionForEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2;

- (void)stop;
- (void).cxx_destruct;
- (void)_clearEnvironmentValues;
- (void)_populateDictionary:(id)a0 withError:(id)a1;
- (id)archivedParentToken;
- (id)createPreflightReporter;
- (id)createStepReporter;
- (id)createViewReporterForPage:(id)a0;
- (id)initWithEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2;
- (id)initWithEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2 archivedParent:(id)a3;
- (void)reportButtonPressedForReporter:(id)a0 buttonTag:(unsigned long long)a1 context:(id)a2;
- (void)reportErrorForReporter:(id)a0 error:(id)a1 context:(id)a2;
- (void)reportOtherButtonPressedForReporter:(id)a0 otherButtonTag:(id)a1 context:(id)a2;
- (void)reportOtherErrorForReporter:(id)a0 error:(id)a1 context:(id)a2;
- (void)reportPageCompletedForReporter:(id)a0 success:(BOOL)a1 context:(id)a2;
- (void)reportPreflightEventForReporter:(id)a0 context:(id)a1;
- (void)reportProvisioningCompleteForReporter:(id)a0 success:(BOOL)a1;
- (void)reportProvisioningStepForReporter:(id)a0 step:(id)a1 success:(BOOL)a2 error:(id)a3 context:(id)a4;
- (void)reportProvisioningStepStartForReporter:(id)a0 step:(id)a1 context:(id)a2;
- (void)reportRawEventForReporter:(id)a0 event:(id)a1;
- (void)reportStateChangedForReporter:(id)a0 context:(id)a1;
- (void)reportViewAppearedForReporter:(id)a0 context:(id)a1;
- (void)resetForNewProductSetup;
- (void)resetProductTypes;
- (void)setCampaignAttributionReferrerIdentifier:(id)a0;
- (void)setPass:(id)a0;
- (void)setProductIssuer:(id)a0;
- (void)setProductType:(id)a0 subtype:(id)a1;
- (void)setReferralSource:(id)a0;
- (void)setSetupProduct:(id)a0;

@end
