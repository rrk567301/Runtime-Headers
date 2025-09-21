@interface PKProvisioningAnalyticsSessionCampaignAttributionSubjectHandle : PKProvisioningAnalyticsSessionSubjectHandle

- (id)initWithArchivedParent:(id)a0;
- (void)reportEvent:(id)a0 state:(id)a1;
- (void)reportProvisioningCompleteWithState:(id)a0 success:(BOOL)a1;
- (void)reportProvisioningStartWithState:(id)a0;

@end
