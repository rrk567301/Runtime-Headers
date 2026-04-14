@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)requestedTemplateTypeParameter;
- (id)toroClickCountDataParameter;
- (id)frequencyCapDataParameter;
- (id)requestedAdDataParameter;
- (void).cxx_destruct;
- (id)init;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)privacyDataKeyParameter;

@end
