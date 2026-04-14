@class NSError, ICAttachment;

@interface ICAudioRecordingManager : NSObject

@property (class, nonatomic, readonly) ICAttachment *currentAttachment;

+ (void)cancelCurrentAudioRecordingSessionWithCompletionHandler:(void (^)(NSError *))a0;

- (id)init;

@end
