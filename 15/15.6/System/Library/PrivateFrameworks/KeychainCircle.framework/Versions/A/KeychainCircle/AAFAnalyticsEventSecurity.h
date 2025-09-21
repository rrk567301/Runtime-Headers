@class AAFAnalyticsEvent, NSObject;
@protocol OS_dispatch_queue;

@interface AAFAnalyticsEventSecurity : NSObject

@property (retain) AAFAnalyticsEvent *event;
@property char areTestsEnabled;
@property char canSendMetrics;
@property char isAAAFoundationAvailable;
@property char isAuthKitAvailable;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)fetchDeviceSessionIDFromAuthKit:(id)a0;
+ (char)isAAAFoundationAvailable;
+ (char)isAuthKitAvailable;

- (void).cxx_destruct;
- (id)initWithKeychainCircleMetrics:(id)a0 altDSID:(id)a1 flowID:(id)a2 deviceSessionID:(id)a3 eventName:(id)a4 testsAreEnabled:(char)a5 canSendMetrics:(char)a6 category:(id)a7;
- (void)addMetrics:(id)a0;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0;
- (id)getEvent;
- (id)initWithCKKSMetrics:(id)a0 altDSID:(id)a1 eventName:(id)a2 testsAreEnabled:(char)a3 category:(id)a4 sendMetric:(char)a5;
- (id)initWithKeychainCircleMetrics:(id)a0 altDSID:(id)a1 eventName:(id)a2 category:(id)a3;
- (char)permittedToSendMetrics;

@end
