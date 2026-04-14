@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;
- (id)init;
- (id)requestedTemplateTypeParameter;
- (id)privacyDataKeyParameter;
- (id)requestedAdDataParameter;
- (void).cxx_destruct;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;

@end
