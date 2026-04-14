@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSmartSiriVolumeClientDelegate;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssvConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSSmartSiriVolumeClientDelegate> delegate;

- (id)_getRemoteServiceProxyObject;
- (void)setSmartSiriVolumeDirection:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSmartSiriVolumePercentage:(float)a0;
- (id)init;
- (void)_createClientConnection;
- (void)dealloc;
- (void)setPermanentVolumeOffsetWithDirection:(BOOL)a0;
- (void)didTTSVolumeChangeForReason:(unsigned long long)a0;
- (id)getVolumeForTTSType:(unsigned long long)a0 withContext:(id)a1;

@end
