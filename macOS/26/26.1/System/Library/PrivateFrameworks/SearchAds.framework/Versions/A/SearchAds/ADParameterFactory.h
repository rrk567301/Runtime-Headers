@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;
- (id)privacyDataKeyParameter;
- (id)requestedTemplateTypeParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)requestedAdDataParameter;
- (void).cxx_destruct;
- (id)init;

@end
