@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (id)initWithIdentifierString:(id)a0;
- (BOOL)isAuthenticated;
- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)senderCorrelationIdentifier;
- (BOOL)isEqual:(id)a0;

@end
