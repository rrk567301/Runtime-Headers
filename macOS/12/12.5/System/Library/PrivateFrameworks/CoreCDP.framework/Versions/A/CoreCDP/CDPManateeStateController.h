@class NSString;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>

@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)isPrimaryAccountHSA2;
- (BOOL)_checkSecurityEligibility:(id *)a0;
- (void)_didCreateCircleProxy;
- (void)reportManateeAvailable;
- (void)reportManateeUnavailable;
- (void)_sendNotification:(const char *)a0 withValue:(unsigned long long)a1;
- (void)securityLevelChanged:(BOOL)a0;
- (void)circleStatusChanged;
- (void)circleViewStatusChanged;

@end
