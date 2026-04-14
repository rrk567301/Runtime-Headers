@class NSMutableDictionary;

@interface SCStreamManager : NSObject <RPScreenRecordeScreenCapureKitDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenStreamLock;
}

@property (retain, nonatomic) NSMutableDictionary *currentStreams;

+ (id)sharedManager;
+ (id)requestUserPermissionForScreenCapture;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didCaptureSurface:(id)a1 withDirtyRects:(id)a2 withDictionary:(id)a3;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (void)registerStream:(id)a0;
- (void)deregisterStream:(id)a0;

@end
