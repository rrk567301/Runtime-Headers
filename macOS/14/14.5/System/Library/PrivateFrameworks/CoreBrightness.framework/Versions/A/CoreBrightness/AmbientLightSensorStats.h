@class NSLock, NSObject;
@protocol OS_dispatch_source;

@interface AmbientLightSensorStats : NSObject {
    struct { unsigned long long alsAccumulatedTimeSinceLastPost; float averageLux; BOOL isFirstReport; unsigned long long reportStatLastTimestamp; float lastLuxValue; float minLuxValue; float maxLuxValue; int numberOfUserBrightnessChanges; BOOL alsEnabled; } _activityFilteredStats;
    struct { unsigned long long alsAccumulatedTimeSinceLastPost; float averageLux; BOOL isFirstReport; unsigned long long reportStatLastTimestamp; float lastLuxValue; float minLuxValue; float maxLuxValue; int numberOfUserBrightnessChanges; BOOL alsEnabled; } _unfilteredStats;
    NSObject<OS_dispatch_source> *_reportTimer;
    unsigned long long _alsIdleEventStartTime;
    NSObject<OS_dispatch_source> *_alsIdleTimer;
    NSObject<OS_dispatch_source> *_userBrightnessTimer;
    unsigned long long _activityNotification;
    unsigned int _clamshellNotification;
    struct IONotificationPort { } *_port;
    unsigned int _clamshellStateIterator;
    NSLock *_alsEventLock;
    BOOL _clamshellOpened;
    BOOL _userIsActive;
    struct __IOHIDEventSystemClient { } *_hidEventSystemClient;
}

- (void)dealloc;
- (id)init;
- (unsigned int)floorTo2SigFig:(unsigned int)a0;
- (void)cancelALSIdleTimer;
- (void)logALSEnabled:(BOOL)a0 userChanged:(BOOL)a1;
- (void)logALSEvent:(float)a0;
- (void)logALSEventLocked:(float)a0 forStats:(struct { unsigned long long x0; float x1; BOOL x2; unsigned long long x3; float x4; float x5; float x6; int x7; BOOL x8; } *)a1;
- (void)logALSIdleEvent:(BOOL)a0;
- (void)logUserBrightnessChanged;
- (void)reportActivityFilteredLux:(int)a0 range:(int)a1;
- (void)reportUnfilteredLux:(int)a0 range:(int)a1 changes:(int)a2 enabled:(int)a3;
- (void)startALSIdleTimer;
- (void)updateALSEnabled:(BOOL)a0;

@end
