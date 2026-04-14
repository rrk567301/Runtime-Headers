@interface GEOPrivacyManager : NSObject {
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}

@property (readonly, nonatomic) BOOL hasFiredCallHistoryRecentsClearedNotification;
@property (readonly, nonatomic) BOOL hasFiredResetPrivacyWarningsNotification;
@property (readonly, nonatomic) BOOL hasFiredLocationServicesDisabledNotification;

+ (id)sharedManager;

- (void)_fireResetLocationAndPrivacyNotification;
- (void)_locationServicesStateChanged;
- (void)_fireRecentsClearedNotification;
- (id)init;
- (void)dealloc;

@end
