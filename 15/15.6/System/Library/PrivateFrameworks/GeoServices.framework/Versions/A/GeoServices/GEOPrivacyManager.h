@interface GEOPrivacyManager : NSObject {
    char _lastKnownLocationServicesEnabled;
    char _hasLastKnownLocationServicesEnabled;
}

@property (readonly, nonatomic) char hasFiredCallHistoryRecentsClearedNotification;
@property (readonly, nonatomic) char hasFiredResetPrivacyWarningsNotification;
@property (readonly, nonatomic) char hasFiredLocationServicesDisabledNotification;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)_fireRecentsClearedNotification;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_locationServicesStateChanged;

@end
