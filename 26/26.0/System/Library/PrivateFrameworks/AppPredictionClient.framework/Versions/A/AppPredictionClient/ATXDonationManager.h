@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDonationManager : NSObject <ATXClientDonationsXPCInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)_connection;
- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;
- (void)_donateMenuItem:(id)a0 completion:(id /* block */)a1;
- (void)donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;
- (void)donateMenuItem:(id)a0 completion:(id /* block */)a1;

@end
