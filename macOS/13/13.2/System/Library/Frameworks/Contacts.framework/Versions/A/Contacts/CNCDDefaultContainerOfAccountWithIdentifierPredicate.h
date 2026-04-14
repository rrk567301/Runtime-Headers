@class NSString;

@interface CNCDDefaultContainerOfAccountWithIdentifierPredicate : CNPredicate

@property (readonly, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountIdentifider:(id)a0;

@end
