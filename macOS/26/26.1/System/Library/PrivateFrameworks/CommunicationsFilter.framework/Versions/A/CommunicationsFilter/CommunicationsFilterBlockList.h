@class CommunicationsFilterBlockListCache, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CMFXPCServiceProtocol;

@interface CommunicationsFilterBlockList : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
    id<CMFXPCServiceProtocol> _xpcService;
}

+ (id)sharedInstance;

- (BOOL)isItemInList:(id)a0;
- (id)initWithXPCService:(id)a0;
- (void)removeItemForAllServices:(id)a0;
- (id)copyAllItems;
- (void)addItemForAllServices:(id)a0;
- (id)areItemsInList:(id)a0;
- (void)dealloc;
- (id)init;

@end
