@class NSString;

@interface ABCoreRecentsAccountConfiguration : ABInMemoryAccountConfiguration

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isAcceptedIntrosAccount;

- (id)initWithAccountIdentifier:(id)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
