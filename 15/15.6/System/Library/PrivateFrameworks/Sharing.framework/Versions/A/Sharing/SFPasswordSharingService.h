@class NSDate, NSString, NSUUID, SFService, SFPasswordSharingInfo, NSObject, SFUserAlert;
@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;

@interface SFPasswordSharingService : NSObject {
    char _activateCalled;
    char _invalidateCalled;
    SFUserAlert *_notification;
    NSUUID *_peer;
    SFPasswordSharingInfo *_promptedInfo;
    SFService *_service;
    int _serviceState;
    NSDate *_shareClock;
    double _shareTime;
}

@property (weak, nonatomic) id<SFPasswordSharingServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *networkName;

+ (unsigned int)passwordSharingAvailability;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_run;
- (void)__testReceivedObject:(id)a0 withFlags:(unsigned int)a1;
- (void)_sendPasswordDeclinedWithError:(int)a0;
- (char)__activateCalled;
- (char)__invalidateCalled;
- (void)_handleReceivedPassword:(id)a0;
- (void)_handleSessionStarted:(id)a0;
- (void)_handleUserNotificationResponse:(int)a0;
- (void)_passInfoToDelegate:(id)a0;
- (void)_promptUserWithInfo:(id)a0 message:(id)a1;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (int)_runServiceStart;
- (void)_sendPasswordReceived;
- (char)disabledViaConfig;
- (id)messageForDisplayName:(id)a0 deviceName:(id)a1 info:(id)a2;

@end
