@class NSString, NSURL, NSArray;

@interface PKPendingPaymentRemoteCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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
@property (retain, nonatomic) NSArray *activationMethods;

- (id)credential;
- (id)type;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForDatabase;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithRemoteCredential:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
