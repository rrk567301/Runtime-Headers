@class NSString, ACAccount;

@interface CalACMigrationAccount : NSObject <CalMigrationAccount>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (nonatomic) BOOL provisionedForCalendarsDataClass;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL authenticated;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)accountTypeIdentifier;
- (void)setPassword:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (id)accountPropertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)parentAccountIdentifier;
- (id)initWithACAccount:(id)a0;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;

@end
