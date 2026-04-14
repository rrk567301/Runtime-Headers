@class NSUUID, NSError, NSDate;

@interface HomeKitDaemon.CameraRecordingSessionErrorResult : _TtCs12_SwiftObject <HMDCameraRecordingSessionErrorResult> {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ error;
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BOOL expired;

@end
