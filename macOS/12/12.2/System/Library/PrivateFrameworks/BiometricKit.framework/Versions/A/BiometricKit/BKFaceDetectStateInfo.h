@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject

@property (readonly, nonatomic) BOOL faceDetected;
@property (readonly, nonatomic) NSNumber *pitch;
@property (readonly, nonatomic) NSNumber *yaw;
@property (readonly, nonatomic) NSNumber *roll;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) BOOL tooCloseToCamera;
@property (readonly, nonatomic) BOOL tooFarFromCamera;
@property (readonly, nonatomic) BOOL multipleFaces;
@property (readonly, nonatomic) BOOL flare;
@property (readonly, nonatomic) BOOL occlusion;
@property (readonly, nonatomic) BOOL partiallyOutOfView;

- (void).cxx_destruct;

@end
