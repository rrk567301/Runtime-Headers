@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (BOOL)isAuthenticated;
- (id)senderCorrelationIdentifier;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifierString:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
