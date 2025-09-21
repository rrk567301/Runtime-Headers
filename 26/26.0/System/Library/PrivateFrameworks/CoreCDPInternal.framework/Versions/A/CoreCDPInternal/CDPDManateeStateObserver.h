@class NSString, CDPBroadcaster;

@interface CDPDManateeStateObserver : NSObject <CDPDAuthListener, CDPDCircleListener, CDPDFirstUnlockListener>

@property (readonly, nonatomic) CDPBroadcaster *broadcaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)securityLevelChangedForAccountContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_sendNotification:(const char *)a0 withUserInfo:(id)a1;
- (void)_checkManateeStatusAndSendAvailabilityNotificationForContext:(id)a0;
- (id)_proxyForContext:(id)a0;
- (void)_reportPrimaryAccountManateeAvailability:(BOOL)a0;
- (void)circleStatusChangedForAccountContext:(id)a0;
- (void)circleViewStatusChangedForAccountContext:(id)a0;
- (void)deviceDidUnlockForTheFirstTime;
- (id)initWithBroadcaster:(id)a0;

@end
