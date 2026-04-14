@interface MDMCheckInRequest : NSObject

+ (void)_checkInRequestAtURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 signMessage:(BOOL)a4 isUserEnrollment:(BOOL)a5 enrollmentID:(id)a6 topic:(id)a7 pushMagic:(id)a8 rmAccountID:(id)a9 messageType:(id)a10 requestDict:(id)a11 channelType:(unsigned long long)a12 isCheckout:(BOOL)a13 isShortTransaction:(BOOL)a14 completionHandler:(id /* block */)a15;
+ (id)_createNoInstallationError;
+ (id)_requestDataWithRequestDict:(id)a0 enrollmentID:(id)a1 topic:(id)a2 pushMagic:(id)a3 isUserEnrollment:(BOOL)a4 messageType:(id)a5 channelType:(unsigned long long)a6 error:(id *)a7;
+ (id)_userFieldsForRequest;
+ (void)executeRequestForMessageType:(id)a0 channelType:(unsigned long long)a1 requestDict:(id)a2 completionHandler:(id /* block */)a3;
+ (void)executeRequestForMessageType:(id)a0 channelType:(unsigned long long)a1 requestDict:(id)a2 isCheckout:(BOOL)a3 shouldIncludeTopic:(BOOL)a4 shouldIncludePushMagic:(BOOL)a5 isEnrollmentRequired:(BOOL)a6 isShortTransaction:(BOOL)a7 completionHandler:(id /* block */)a8;

@end
