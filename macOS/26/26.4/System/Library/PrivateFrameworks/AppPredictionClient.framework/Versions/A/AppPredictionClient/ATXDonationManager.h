@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDonationManager : NSObject <ATXClientDonationsXPCInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)_init;
- (id)_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_cleanUpConnection;
- (void)_donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;
- (void)_donateMenuItem:(id)a0 completion:(id /* block */)a1;
- (void)donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;
- (void)donateMenuItem:(id)a0 completion:(id /* block */)a1;

@end
