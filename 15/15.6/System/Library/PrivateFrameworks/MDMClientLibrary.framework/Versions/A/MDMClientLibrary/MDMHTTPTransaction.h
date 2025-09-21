@class NSString;

@interface MDMHTTPTransaction : DMCHTTPTransaction

@property (copy, nonatomic) NSString *rmAccountID;
@property (readonly, nonatomic) char isCheckIn;
@property (readonly, nonatomic) char isCheckout;

+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;
+ (id)unauthorizedByServerError;

- (void).cxx_destruct;
- (void)_commonInit:(struct __SecIdentity { } *)a0 timeout:(unsigned long long)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(char)a3 signMessage:(char)a4 rmAccountID:(id)a5;
- (void)_updateAuthentication;
- (id)initWithURL:(id)a0 data:(id)a1 identity:(struct __SecIdentity { } *)a2 pinnedCertificates:(id)a3 pinningRevocationCheckRequired:(char)a4 signMessage:(char)a5 isCheckin:(char)a6 isCheckout:(char)a7 isShortTransaction:(char)a8 rmAccountID:(id)a9;
- (id)initWithURL:(id)a0 downloadURL:(id)a1 identity:(struct __SecIdentity { } *)a2 pinnedCertificates:(id)a3 pinningRevocationCheckRequired:(char)a4 signMessage:(char)a5 isShortTransaction:(char)a6 rmAccountID:(id)a7;
- (id)initWithURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedCertificates:(id)a2 pinningRevocationCheckRequired:(char)a3 signMessage:(char)a4 isShortTransaction:(char)a5 rmAccountID:(id)a6;
- (void)resetAuthentication;

@end
