@class NSManagedObjectContext, NSXPCStore, NSDictionary, NSMutableDictionary, NSSaveChangesRequest;

@interface NSXPCSaveRequestContext : NSObject {
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
    unsigned long long _interrupts;
    char _forceUpdates;
}

- (void)dealloc;
- (id)managedObjectContext;
- (id)initForStore:(id)a0 request:(id)a1 metadata:(id)a2 forceInsertsToUpdates:(char)a3 context:(id)a4;

@end
