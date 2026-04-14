@class NSString, SCObjectList;

@interface SCStreamManager : NSObject <RPScreenRecorderScreenCapureKitDelegate, RPScreenRecorderScreenCapureKitPreviewDelegate> {
    SCObjectList *_currentStreams;
    SCObjectList *_currentPreviews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)requestUserPermissionForScreenCapture;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (void)registerPreview:(id)a0;
- (void)previewDidUpdate:(id)a0;
- (void)serverDidDisconnect;
- (void)startRemoteQueue:(id)a0 streamID:(id)a1;
- (void)stopRemoteQueue:(id)a0 type:(unsigned char)a1;
- (void)stream:(id)a0 didRequestUpdateFilter:(id)a1;
- (void)stream:(id)a0 updateWithFilter:(id)a1;
- (void)streamOutputEffectDidStart:(BOOL)a0 withStreamID:(id)a1;
- (id)getStreamForID:(id)a0;
- (void)registerStream:(id)a0;
- (void)deregisterPreview:(id)a0;
- (void)deregisterStream:(id)a0;
- (id)previewForPreviewID:(id)a0;

@end
