@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;
- (id)requestedAdDataParameter;
- (id)init;
- (id)privacyDataKeyParameter;
- (id)requestedTemplateTypeParameter;
- (void).cxx_destruct;

@end
