@class NSString;

@interface MPHomeMonitor : NSObject <MPHomeManagerObserverDelegate> {
    char _soundCheckCachedValue;
}

@property (class, readonly, nonatomic) char isCurrentDeviceValidHomeAccessory;
@property (class, readonly, nonatomic) MPHomeMonitor *sharedMonitor;

@property (nonatomic, getter=isSoundCheckEnabled) char soundCheckEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupIfNecessary;

- (id)init;
- (void)_postNotificationWithName:(id)a0;
- (void)currentHomeDidChange;
- (void)currentUserDidChange;
- (void)homeUsersDidChange;
- (void)soundCheckSettingDidUpdate:(char)a0;

@end
