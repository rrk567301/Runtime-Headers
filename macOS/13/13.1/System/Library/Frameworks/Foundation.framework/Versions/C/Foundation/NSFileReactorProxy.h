@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setItemLocation:(id)a0;
- (id)itemLocation;
- (id)descriptionWithIndenting:(id)a0;
- (id)client;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)reactorID;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (void)forwardUsingProxy:(id)a0;
- (BOOL)allowedForURL:(id)a0;
- (id)_clientProxy;

@end
