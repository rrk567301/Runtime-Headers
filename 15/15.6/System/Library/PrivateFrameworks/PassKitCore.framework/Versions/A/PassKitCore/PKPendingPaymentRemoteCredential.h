@class NSString, NSURL;

@interface PKPendingPaymentRemoteCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (nonatomic) long long credentialType;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *cardIdentifier;
@property (retain, nonatomic) NSString *ownershipToken;
@property (retain, nonatomic) NSString *transferableFromDeviceSerialNumber;
@property (retain, nonatomic) NSString *transferableFromDeviceIdentifier;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSURL *passURL;
@property (nonatomic) char supportsSuperEasyProvisioning;
@property (nonatomic) char couldSupportSuperEasyProvisioning;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (id)initForDatabase;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithRemoteCredential:(id)a0;
- (char)representsCredential:(id)a0;

@end
