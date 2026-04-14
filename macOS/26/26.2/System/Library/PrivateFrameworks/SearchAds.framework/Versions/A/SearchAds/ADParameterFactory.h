@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)toroClickCountDataParameter;
- (id)requestedAdDataParameter;
- (id)privacyDataKeyParameter;
- (void).cxx_destruct;
- (id)frequencyCapDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)init;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;

@end
