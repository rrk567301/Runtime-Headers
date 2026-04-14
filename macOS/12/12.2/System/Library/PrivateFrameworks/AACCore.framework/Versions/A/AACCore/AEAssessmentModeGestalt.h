@class NSURL;
@protocol AESystemNotificationPrimitives, AEFileSystemPrimitives, AEObservation;

@interface AEAssessmentModeGestalt : NSObject

@property (readonly, nonatomic) NSURL *assessmentFileURL;
@property (readonly, nonatomic) id<AESystemNotificationPrimitives> systemNotificationPrimitives;
@property (readonly, nonatomic) id<AEFileSystemPrimitives> fileSystemPrimitives;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) id<AEObservation> stateChangeNotificationObservation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)initWithSystemNotificationPrimitives:(id)a0 fileSystemPrimitives:(id)a1 assessmentFileURL:(id)a2;

@end
