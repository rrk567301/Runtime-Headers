@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriAudioMessageRequestClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (id)_service;
- (void)dealloc;
- (id)_newConnection;
- (void)forceReleaseAllAudioMessageRetainLock;
- (void)getAudioFileWithRequestId:(id)a0 completion:(id /* block */)a1;
- (void)releaseAudioMessageRetainLockFromRequestId:(id)a0;

@end
