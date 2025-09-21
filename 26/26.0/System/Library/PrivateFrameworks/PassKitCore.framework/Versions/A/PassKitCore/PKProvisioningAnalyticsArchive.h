@class PKProvisioningAnalyticsSessionProvisioningSubjectHandle, PKProvisioningAnalyticsState, NSData, PKProvisioningAnalyticsSessionMarketingSubjectHandle, PKProvisioningAnalyticsSessionCampaignAttributionSubjectHandle;

@interface PKProvisioningAnalyticsArchive : NSObject <NSSecureCoding> {
    NSData *_provisioningSubjectToken;
    NSData *_provisioningMarketingSubjectToken;
    NSData *_campaignAttributionSubjectToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKProvisioningAnalyticsState *state;
@property (readonly, nonatomic) PKProvisioningAnalyticsSessionProvisioningSubjectHandle *provisioningSubjectHandle;
@property (readonly, nonatomic) PKProvisioningAnalyticsSessionMarketingSubjectHandle *marketingSubjectHandle;
@property (readonly, nonatomic) PKProvisioningAnalyticsSessionCampaignAttributionSubjectHandle *campaignAttributionSubjectHandle;

+ (id)createArchiveFromArchiveData:(id)a0;
+ (id)createArchiveWithState:(id)a0 provisioningSubjectHandle:(id)a1 marketingSubjectHandle:(id)a2 campaignAttributionSubjectHandle:(id)a3;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
