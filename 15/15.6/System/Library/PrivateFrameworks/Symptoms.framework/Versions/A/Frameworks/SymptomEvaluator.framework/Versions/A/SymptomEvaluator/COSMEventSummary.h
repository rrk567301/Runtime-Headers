@interface COSMEventSummary : NSObject {
    char _arpFailureEvent;
    char _captivityIndeterminateEvent;
    char _dampeningTimerExpiryEvent;
    char _dataStallThresholdEvent;
    char _excessCertificateErrorsEvent;
    char _imminentStallEvent;
    char _mediaPlaybackStallEvent;
    char _nd6FailureEvent;
    char _wifiChangedSSIDEvent;
}

@property (nonatomic) char arpFailureEvent;
@property (nonatomic) char captivityIndeterminateEvent;
@property (nonatomic) char dampeningTimerExpiryEvent;
@property (nonatomic) char dataStallThresholdEvent;
@property (nonatomic) char excessCertificateErrorsEvent;
@property (nonatomic) char imminentStallEvent;
@property (nonatomic) char mediaPlaybackStallEvent;
@property (nonatomic) char nd6FailureEvent;
@property (nonatomic) char wifiChangedSSIDEvent;
@property (readonly, nonatomic) unsigned long long eventsInstanceNumber;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (id)description;
- (void)clear;
- (void)_bumpInstanceNumber;

@end
