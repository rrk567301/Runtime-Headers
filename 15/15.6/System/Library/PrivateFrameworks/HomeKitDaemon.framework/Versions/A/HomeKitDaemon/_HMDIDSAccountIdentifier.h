@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (char)supportsSecureCoding;
+ (id)namespace;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (char)isAuthenticated;
- (id)senderCorrelationIdentifier;
- (id)initWithIdentifierString:(id)a0;

@end
