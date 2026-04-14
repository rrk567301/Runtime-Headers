@class NSArray, NSString, NSError;

@interface ATXActionIndexer : NSObject {
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ database;
}

@property (class, nonatomic, readonly) ATXActionIndexer *sharedInstance;

+ (id)removeParametersFromToolKitAction:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)batchIndexActionsWithActions:(NSArray *)a0 removeStaleActions:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;
- (void)deleteAllIndexedActionsWithCompletionHandler:(void (^)(NSError *))a0;
- (void)encodedToolInvocationsForParameterSuggestionsWithSlotResolutionBasedActions:(NSArray *)a0 toolID:(NSString *)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;

@end
