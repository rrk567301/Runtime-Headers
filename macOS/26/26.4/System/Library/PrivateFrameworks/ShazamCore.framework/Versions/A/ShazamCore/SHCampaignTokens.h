@class NSDictionary, NSString;

@interface SHCampaignTokens : NSObject

@property (readonly) NSDictionary *campaignTokens;
@property (readonly, copy) NSString *providerToken;
@property (readonly, copy) NSString *campaignGroup;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 defaultConfigurationValues:(id)a1;
- (id)tokenForClientIdentifier:(id)a0;

@end
