@class NSString;

@interface ABCoreRecentsAccountConfiguration : ABInMemoryAccountConfiguration

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isAcceptedIntrosAccount;

- (BOOL)isEnabled;
- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
