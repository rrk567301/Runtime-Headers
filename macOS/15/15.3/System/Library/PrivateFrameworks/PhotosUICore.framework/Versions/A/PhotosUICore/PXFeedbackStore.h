@class NSMutableDictionary;

@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (id)longDescription;
- (id)_storePath;
- (void)_cleanupStore;
- (BOOL)_loadStore;
- (BOOL)_saveStore;
- (void)addFeedbackEntry:(id)a0;
- (void)removeFeedbackEntry:(id)a0;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;

@end
