@interface AMSDaemonConnectionInterface : NSObject

+ (id)_deviceMessengerClientInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (id)_accountCachedServerDataInterface;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (id)_dismissQRDialogServiceInterface;
+ (id)_keychainServiceInterface;
+ (id)_accountSignOutInterface;
+ (id)_paymentConfirmationInterface;
+ (id)_securityServiceInterface;
+ (id)_accountPostSignInInterface;
+ (id)_onDeviceDataInterface;
+ (id)_cookieServiceInterface;
+ (id)_paymentValidationServiceInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_securityClientInterface;
+ (id)interface;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)a0;
+ (id)_fraudReportServiceInterface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (id)_accountManagementInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_autoBugCaptureServiceInterface;
+ (id)_purchaseServiceInterface;

@end
