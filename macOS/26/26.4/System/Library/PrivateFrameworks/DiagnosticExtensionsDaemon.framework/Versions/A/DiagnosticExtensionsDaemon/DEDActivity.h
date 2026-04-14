@class NSObject;
@protocol OS_os_activity;

@interface DEDActivity : NSObject

@property (retain) NSObject<OS_os_activity> *cleanup;

+ (id)sharedInstance;

- (id)currentCleanupActivity;
- (void).cxx_destruct;
- (id)newCleanupActivity;

@end
