@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation

@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL highPriority;
@property (weak, nonatomic) id<BKFaceDetectOperationDelegate> delegate;

@end
