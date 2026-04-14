@class NSString, NSURL, NSError, NSObject, NSFileProviderService;
@protocol OS_dispatch_group, BRShareOperationProtocol, NSXPCProxyCreating;

@interface BRShareOperation : BROperation {
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSError *_initError;
    NSFileProviderService *_sharingService;
    id<BRShareOperationProtocol, NSXPCProxyCreating> _remoteObject;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *itemID;

- (id)remoteObject;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0;
- (id)directConnectionFPFSObject;
- (id)initWithDirectConnection;
- (id)initWithShare:(id)a0;
- (id)remoteFPFSObject;
- (id)remoteLegacyObject;
- (BOOL)shouldUseDirectConnection;

@end
