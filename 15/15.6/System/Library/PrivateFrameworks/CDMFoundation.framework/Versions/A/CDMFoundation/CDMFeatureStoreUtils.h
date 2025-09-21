@interface CDMFeatureStoreUtils : NSObject

+ (id)allowedFSMessagesOnExternalBuilds;
+ (char)checkFeatureStoreEnabledForExternalBuilds:(id)a0;
+ (char)insertJsonStringToFeatureStore:(id)a0 interactionId:(id)a1 streamId:(id)a2;
+ (char)insertLVCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertLVCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertMDRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertMDResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertMRRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertMRResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertNLv4ParserRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertNLv4ParserResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertPSCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertPSCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertPreprocessingWrapperToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertRequestToFeatureStoreAsJson:(id)a0;
+ (char)insertResponseToFeatureStoreAsJson:(id)a0;
+ (char)insertSNLCRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertSNLCResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertSpanMatchResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertTokenizerResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertUaaPParserRequestToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)insertUaaPParserResponseToFeatureStore:(id)a0 interactionId:(id)a1;
+ (char)platformSupportedAndEnabled;

@end
