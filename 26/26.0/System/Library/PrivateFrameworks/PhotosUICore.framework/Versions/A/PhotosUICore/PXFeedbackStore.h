@class NSMutableDictionary;

@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (id)longDescription;
- (void).cxx_destruct;
- (BOOL)_loadStore;
- (void)_cleanupStore;
- (BOOL)_saveStore;
- (id)_storePath;
- (void)addFeedbackEntry:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;

@end
