@class NSString;

@interface CNCDDefaultContainerOfAccountWithIdentifierPredicate : CNPredicate

@property (readonly, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccountIdentifider:(id)a0;

@end
