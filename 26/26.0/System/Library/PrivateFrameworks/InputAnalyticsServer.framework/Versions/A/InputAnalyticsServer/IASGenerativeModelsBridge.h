@interface IASGenerativeModelsBridge : NSObject

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)chatGPTAccountType;
- (BOOL)isChina;
- (unsigned long long)isGenerativeModelsAvailableForADM;
- (unsigned long long)isGenerativeModelsAvailableForGenmoji;
- (unsigned long long)isGenerativeModelsAvailableForSmartReply;
- (unsigned long long)isGenerativeModelsAvailableForUseCaseIdentifiers:(id)a0;
- (unsigned long long)isGenerativeModelsAvailableForWritingTools;

@end
