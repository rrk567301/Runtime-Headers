@interface AMSDaemonConnectionInterface : NSObject

+ (id)_onDeviceDataInterface;
+ (id)interface;
+ (id)_fraudReportServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (id)_paymentConfirmationInterface;
+ (id)_securityServiceInterface;
+ (id)_accountCachedServerDataInterface;
+ (id)_deviceMessengerServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_autoBugCaptureServiceInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)_purchaseServiceInterface;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (id)_deviceMessengerClientInterface;
+ (id)_accountSignOutInterface;
+ (id)_accountManagementInterface;
+ (id)_securityClientInterface;
+ (id)_keychainServiceInterface;
+ (id)_dismissQRDialogServiceInterface;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (id)_paymentValidationServiceInterface;
+ (id)_cookieServiceInterface;
+ (id)_accountPostSignInInterface;

@end
