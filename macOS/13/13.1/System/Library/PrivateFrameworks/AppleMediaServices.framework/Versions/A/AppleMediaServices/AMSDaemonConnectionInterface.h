@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (id)_cookieServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_fraudReportServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_purchaseServiceInterface;
+ (id)_securityClientInterface;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;

@end
