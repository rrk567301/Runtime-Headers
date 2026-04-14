@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CoreSpeechXPCFakeModelMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int fakeAssetRollNotificationRegistrationToken;
@property (retain) NSString *lastFakeModelUsedHash;
@property BOOL shouldRollFakeModel;

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)_registerForFakeAssetRollNotification;

@end
