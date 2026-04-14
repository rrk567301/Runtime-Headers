@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (BOOL)allowedForURL:(id)a0;
- (id)itemLocation;
- (id)client;
- (void)forwardUsingProxy:(id)a0;
- (id)description;
- (void)dealloc;
- (id)descriptionWithIndenting:(id)a0;
- (id)_clientProxy;
- (void)setItemLocation:(id)a0;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (id)reactorID;

@end
