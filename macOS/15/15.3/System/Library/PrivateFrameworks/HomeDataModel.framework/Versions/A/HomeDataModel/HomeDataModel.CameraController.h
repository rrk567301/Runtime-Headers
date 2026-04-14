@class NSString;

@interface HomeDataModel.CameraController : SwiftNativeNSObject <HMCameraUserSettingsDelegate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ updates;
    void /* unknown type, empty encoding */ cameraProfile;
    void /* unknown type, empty encoding */ snapshotTimer;
    void /* unknown type, empty encoding */ previousSnapshotCallTime;
    void /* unknown type, empty encoding */ isStartingStream;
    void /* unknown type, empty encoding */ isStoppingStream;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)cameraSnapshotControl:(id)a0 didTakeSnapshot:(id)a1 error:(id)a2;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)a0;
- (void)cameraStreamControl:(id)a0 didStopStreamWithError:(id)a1;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (void)cameraUserSettingsDidUpdate:(id)a0;

@end
