@interface MusicKit_EnvironmentInfo : NSObject

@property (class, readonly, nonatomic) MusicKit_EnvironmentInfo *shared;

@property (readonly, nonatomic) BOOL isMusicAppInstalled;

- (id)_init;
- (void)dealloc;
- (void)_appRegistrationDidChange:(id)a0;
- (void)startListeningForInvalidationNotification;
- (void)stopListeningForInvalidationNotification;

@end
