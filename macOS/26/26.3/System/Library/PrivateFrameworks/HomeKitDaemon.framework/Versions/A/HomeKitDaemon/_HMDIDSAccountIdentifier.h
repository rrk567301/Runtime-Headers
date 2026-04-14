@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifierString:(id)a0;
- (BOOL)isAuthenticated;
- (id)kind;
- (id)senderCorrelationIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
