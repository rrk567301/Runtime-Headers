@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriAudioMessageRequestClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (id)_service;
- (id)_newConnection;
- (void)forceReleaseAllAudioMessageRetainLock;
- (void)getAudioFileWithRequestId:(id)a0 completion:(id /* block */)a1;
- (void)releaseAudioMessageRetainLockFromRequestId:(id)a0;

@end
