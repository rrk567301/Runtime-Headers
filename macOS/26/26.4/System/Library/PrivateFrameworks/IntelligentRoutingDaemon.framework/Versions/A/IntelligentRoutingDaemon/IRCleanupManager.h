@class IRBackgroundActivitiesManager;

@interface IRCleanupManager : NSObject

@property (weak, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

- (void).cxx_destruct;
- (void)_handleCleanupXPCActivity;
- (id)initWithBackgroundActivitiesManager:(id)a0;

@end
