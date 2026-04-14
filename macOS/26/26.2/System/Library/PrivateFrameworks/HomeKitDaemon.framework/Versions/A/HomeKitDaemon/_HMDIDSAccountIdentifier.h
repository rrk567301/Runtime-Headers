@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (id)kind;
- (id)initWithCoder:(id)a0;
- (BOOL)isAuthenticated;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)senderCorrelationIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifierString:(id)a0;

@end
