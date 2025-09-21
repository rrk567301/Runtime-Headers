@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation

@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (nonatomic) char highPriority;
@property (nonatomic) char eyeRelief;
@property (nonatomic) char motionDetect;
@property (weak, nonatomic) id<BKFaceDetectOperationDelegate> delegate;

@end
