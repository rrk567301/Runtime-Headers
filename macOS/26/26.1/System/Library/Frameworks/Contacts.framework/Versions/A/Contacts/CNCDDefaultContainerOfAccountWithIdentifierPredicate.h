@class NSString;

@interface CNCDDefaultContainerOfAccountWithIdentifierPredicate : CNPredicate

@property (readonly, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountIdentifider:(id)a0;

@end
