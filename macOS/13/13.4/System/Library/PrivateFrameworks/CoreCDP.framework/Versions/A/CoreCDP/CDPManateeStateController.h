@class NSString, CDPContext;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {
    CDPContext *_context;
}

@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isManateeAvailable:(id *)a0;
- (void)_sendNotification:(const char *)a0 withUserInfo:(id)a1;
- (BOOL)_checkSecurityEligibilityForContext:(id)a0 error:(id *)a1;
- (void)_didCreateCircleProxy;
- (BOOL)_isPrimaryAccount:(id)a0;
- (void)_reportManateeAvailability:(BOOL)a0 value:(unsigned long long)a1;
- (void)checkCircleStatusAndSendManateeAvailabilityNotification;
- (void)circleStatusChanged;
- (void)circleViewStatusChanged;
- (void)securityLevelChanged:(BOOL)a0 forAltDSID:(id)a1;

@end
