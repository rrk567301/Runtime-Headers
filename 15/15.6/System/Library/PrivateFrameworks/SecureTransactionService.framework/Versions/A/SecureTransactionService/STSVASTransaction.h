@class NSData, NSString, NSNumber;

@interface STSVASTransaction : STSAuxiliaryTransaction

@property (readonly, nonatomic) NSData *merchantId;
@property (readonly, nonatomic) NSString *signupUrl;
@property (readonly, nonatomic) NSNumber *terminalAppVersion;
@property (readonly, nonatomic) long long terminalMode;

+ (char)supportsSecureCoding;
+ (id)vasTransactionForCredential:(id)a0 withDictionary:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForCredential:(id)a0 withDictionary:(id)a1;
- (id)vasCredential;

@end
