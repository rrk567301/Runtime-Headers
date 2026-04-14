@class NSString, NSArray;

@interface ECHeaderAuthenticationResults : NSObject

@property (readonly, copy, nonatomic) NSString *authenticationServiceIdentifier;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSArray *statements;

+ (id)authenticationResultsForHeaders:(id)a0;

- (void).cxx_destruct;
- (id)initWithAuthenticationServiceIdentifier:(id)a0 version:(long long)a1 statements:(id)a2;
- (id)firstStatementForMethod:(id)a0;

@end
