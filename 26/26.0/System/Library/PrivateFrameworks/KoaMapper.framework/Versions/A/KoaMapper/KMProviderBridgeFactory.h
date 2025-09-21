@class NSURL;

@interface KMProviderBridgeFactory : NSObject {
    NSURL *_directory;
}

+ (void)initialize;

- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (id)allInstalledAppBundleIdentifiers;
- (void)bootstrapBridgeListenersWithHandler:(id /* block */)a0;
- (id)bridgeForOriginAppId:(id)a0;
- (id)bridgeForOriginAppId:(id)a0 languageCode:(id)a1;
- (id)globalTermMultiDatasetBridgeWithModifiedOriginAppIds:(id)a0 languageCode:(id)a1;
- (id)intentVocabularyMultiDatasetBridge;

@end
