@class AVConferenceXPCClient, VideoAttributes, NSString, CALayer, NSObject;
@protocol OS_dispatch_queue, AVConferencePreviewClientDelegate;

@interface AVConferencePreview : NSObject {
    AVConferenceXPCClient *connection;
    BOOL clientWantsPreview;
    unsigned int connectionAttempts;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    struct CGSize { double width; double height; } localScreenPortraitAspectRatio;
    struct CGSize { double width; double height; } localScreenLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
    BOOL _isPreviewRunning;
    BOOL _zoomAvailable;
    BOOL _CFAvailable;
    double _currentZoomFactor;
    double _maxZoomFactor;
    NSString *_localCameraUID;
}

@property (retain, nonatomic) NSObject<AVConferencePreviewClientDelegate> *delegate;

+ (id)AVConferencePreviewSingleton;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)startPreview;
- (void)stopPreview;
- (double)maxZoomFactor;
- (void)setCinematicFramingEnabled:(BOOL)a0;
- (id)localCameraUID;
- (void)setLocalCameraWithUID:(id)a0;
- (id)localVideoAttributes;
- (void)setLocalVideoAttributes:(id)a0;
- (BOOL)isPreviewRunning;
- (id)localVideoLayer:(BOOL)a0;
- (void)setLocalVideoLayer:(id)a0 front:(BOOL)a1;
- (void)pausePreview;
- (void)getSnapshot;
- (void)setCameraZoomFactor:(double)a0;
- (void)beginPIPToPreviewAnimation;
- (void)endPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)endPreviewToPIPAnimation;
- (void)setLocalScreenAttributes:(id)a0;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)a0;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)didReceiveErrorFromCameraUniqueID:(id)a0 error:(id)a1;
- (void)didReceiveCommError;
- (void)didGetSnapshot:(id)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)a0 reason:(long long)a1;
- (void)cameraZoomAvailabilityDidChange:(BOOL)a0 currentZoomFactor:(double)a1 maxZoomFactor:(double)a2;
- (void)setCameraZoomFactor:(double)a0 withRate:(double)a1;
- (void)setAnimoji:(id)a0;
- (void)setMemoji:(id)a0;
- (void)registerBlocksForDelegateNotifications;
- (void)resetLocalCameraAfterServerDisconnect;
- (void)connectLayer:(id)a0 withSlot:(unsigned int)a1;
- (void)cameraCFramingAvailabilityDidChange:(BOOL)a0;
- (void)startPreviewUnpausing:(BOOL)a0;
- (BOOL)isCameraZoomAvailable;
- (double)currentZoomFactor;
- (void)setLocalCamera:(unsigned int)a0;
- (unsigned int)localCamera;
- (void)addStickerWithURL:(id)a0 isFaceSticker:(BOOL)a1 atPosition:(struct CGPoint { double x0; double x1; })a2 identifier:(id)a3;
- (void)clearAllStickers:(BOOL)a0;

@end
