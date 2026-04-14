@interface AMSDaemonConnectionInterface : NSObject

+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_eligibilityServiceInterface;
+ (id)_autoBugCaptureServiceInterface;
+ (id)interface;
+ (id)_onDeviceDataInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)_paymentValidationServiceInterface;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (id)_deviceMessengerClientInterface;
+ (id)_securityClientInterface;
+ (id)_accountSignOutInterface;
+ (id)_purchaseServiceInterface;
+ (id)_dismissQRDialogServiceInterface;
+ (id)_safariDataUpdateServiceInterface;
+ (id)_cookieServiceInterface;
+ (id)_accountManagementInterface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (id)_accountPostSignInInterface;
+ (id)_fraudReportServiceInterface;
+ (id)_keychainServiceInterface;
+ (id)_accountCachedServerDataInterface;
+ (id)_paymentConfirmationInterface;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (id)_deviceMessengerServiceInterface;

@end
