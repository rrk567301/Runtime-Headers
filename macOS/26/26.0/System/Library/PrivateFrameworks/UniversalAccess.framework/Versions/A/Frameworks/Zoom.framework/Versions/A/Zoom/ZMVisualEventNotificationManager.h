@class AXKApplicationController, NSString, AXKElementController;
@protocol ZMVisualEventNotificationManagerDelegate;

@interface ZMVisualEventNotificationManager : NSObject <AXKWorkspaceObserver>

@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) AXKApplicationController *_notificationCenterApp;
@property (retain, nonatomic) AXKElementController *_frontmostApp;
@property (weak, nonatomic) id<ZMVisualEventNotificationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
