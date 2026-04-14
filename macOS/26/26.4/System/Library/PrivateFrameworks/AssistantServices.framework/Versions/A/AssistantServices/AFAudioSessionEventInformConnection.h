@class NSXPCConnection, AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface AFAudioSessionEventInformConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) AFInstanceContext *instanceContext;

- (id)initWithInstanceContext:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_xpcConnection;
- (void)dealloc;
- (void)_clearXPCConnection;
- (void)informAudioSessionEvent:(id)a0 completion:(id /* block */)a1;

@end
