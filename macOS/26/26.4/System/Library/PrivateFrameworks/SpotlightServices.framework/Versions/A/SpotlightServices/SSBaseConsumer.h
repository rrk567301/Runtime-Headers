@class NSString, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface SSBaseConsumer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_indexQueue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    NSString *_identifier;
}

+ (id)sharedInstance;
+ (id)_getFilePathCache;

- (BOOL)filterEvent:(id)a0;
- (void)stop;
- (BOOL)enabled;
- (id)stream;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)handleEvent:(id)a0;
- (id)identifier;
- (id)_filePathWithCacheForIdentifiers:(id)a0 scopes:(id)a1 groupId:(int)a2;
- (id)_queryFilePathsWithString:(id)a0 scopes:(id)a1 filePathAttribute:(id)a2 identifierAttribute:(id)a3;
- (id)consumerLabel;
- (id)filePathForApplicationWithBundleIDs:(id)a0;
- (id)filePathForContactWithIdentifiers:(id)a0;
- (void)indexItems:(id)a0 protectionClass:(id)a1 bundleID:(id)a2;
- (id)queryFilesWithString:(id)a0 scopes:(id)a1 fetchAttributes:(id)a2;
- (id)queryWithString:(id)a0 bundleIDs:(id)a1 fetchAttributes:(id)a2;
- (void)updateAttributesForFilePath:(id)a0 updatedAttributes:(id)a1;

@end
