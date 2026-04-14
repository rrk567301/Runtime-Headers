@class SCStreamList;

@interface SCStreamManager : NSObject <RPScreenRecordeScreenCapureKitDelegate> {
    SCStreamList *_currentStreams;
}

+ (id)sharedManager;
+ (id)requestUserPermissionForScreenCapture;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (void)startRemoteQueue:(id)a0 streamID:(id)a1;
- (void)stopRemoteQueue:(id)a0 type:(unsigned char)a1;
- (void)registerStream:(id)a0;
- (void)deregisterStream:(id)a0;

@end
