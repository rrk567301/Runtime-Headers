@class NSString, NSArray, ATXOnScreenSelectedContent, NSError;

@interface ATXOnScreenAppEntitiesManager : NSObject {
    void /* unknown type, empty encoding */ cachedSuggestedDocumentURLs;
    void /* unknown type, empty encoding */ serialQueue;
}

@property (class, nonatomic, readonly) ATXOnScreenAppEntitiesManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearPrewarmedContent;
- (id)getSuggestedDocumentsForOnScreenAppEntitiesAndReturnError:(id *)a0;
- (void)processOnScreenAppEntitiesAndCacheSuggestedDocumentsForOnScreenSelectedContent:(ATXOnScreenSelectedContent *)a0 completionHandler:(void (^)(void))a1;
- (void)retrieveEmbeddingsForIndexedAppEntityWithIdentifier:(NSString *)a0 withReply:(void (^)(NSArray *, NSError *))a1;
- (void)retrieveFileURLsForSemanticallySimilarItemsToAppEntityWithIdentifier:(NSString *)a0 withReply:(void (^)(NSArray *, NSError *))a1;
- (void)retrieveIdentifiersForSemanticallySimilarItemsToAppEntityWithIdentifier:(NSString *)a0 withReply:(void (^)(NSArray *, NSError *))a1;
- (void)retrieveSimilarFileURLsForFileWithPath:(NSString *)a0 withReply:(void (^)(NSArray *, NSError *))a1;
- (void)retrieveSimilarFileURLsForSelectedFilesOnFinderWithReply:(void (^)(NSArray *, NSError *))a0;

@end
