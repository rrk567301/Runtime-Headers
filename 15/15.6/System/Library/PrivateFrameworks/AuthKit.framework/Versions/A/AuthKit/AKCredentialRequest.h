@class NSString, NSUUID;

@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *transactionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setRequestIdentifier:(id)a0;

@end
