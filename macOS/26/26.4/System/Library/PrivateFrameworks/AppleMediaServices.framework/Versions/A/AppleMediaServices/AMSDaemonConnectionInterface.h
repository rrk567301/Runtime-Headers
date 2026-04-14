@interface AMSDaemonConnectionInterface : NSObject

+ (id)_securityServiceInterface;
+ (id)_cookieServiceInterface;
+ (id)_purchaseServiceInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)_autoBugCaptureServiceInterface;
+ (id)interface;
+ (id)_deviceMessengerServiceInterface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (id)_safariDataUpdateServiceInterface;
+ (id)_paymentConfirmationInterface;
+ (id)_securityClientInterface;
+ (id)_dismissQRDialogServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (id)_fraudReportServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (id)_accountPostSignInInterface;
+ (id)_accountCachedServerDataInterface;
+ (id)_accountManagementInterface;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (id)_eligibilityServiceInterface;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (id)_accountSignOutInterface;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (id)_onDeviceDataInterface;
+ (id)_keychainServiceInterface;
+ (id)_paymentValidationServiceInterface;

@end
