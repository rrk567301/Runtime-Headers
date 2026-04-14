@class NSMutableDictionary;

@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (id)_storePath;
- (id)longDescription;
- (BOOL)_saveStore;
- (void)addFeedbackEntry:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (BOOL)_loadStore;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;
- (void)_cleanupStore;

@end
