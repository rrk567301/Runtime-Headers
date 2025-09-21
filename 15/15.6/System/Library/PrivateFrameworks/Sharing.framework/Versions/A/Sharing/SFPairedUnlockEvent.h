@class NSString, NSDictionary;

@interface SFPairedUnlockEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) char succeeded;
@property (nonatomic) unsigned short failureReason;
@property (nonatomic) unsigned short attemptHourLocal;
@property (nonatomic) char phoneAutoUnlockEnabled;
@property (nonatomic) char canRelock;
@property (nonatomic) char relockedWatch;
@property (nonatomic) NSString *bannerDismissReason;
@property (nonatomic) long long bannerDismissalCount;
@property (nonatomic) long long phoneState;
@property (nonatomic) char usingEscrowRecord;
@property (nonatomic) char retriedWithEscrowRecord;
@property (copy, nonatomic) NSString *watchHardwareModel;
@property (copy, nonatomic) NSString *watchSoftwareVersion;
@property (nonatomic) unsigned int keyExchangeDuration;
@property (nonatomic) unsigned int pillDelay;
@property (nonatomic) unsigned int confirmationDuration;
@property (nonatomic) unsigned int totalUnlockProcessDuration;
@property (nonatomic) unsigned int totalUnlockDuration;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
