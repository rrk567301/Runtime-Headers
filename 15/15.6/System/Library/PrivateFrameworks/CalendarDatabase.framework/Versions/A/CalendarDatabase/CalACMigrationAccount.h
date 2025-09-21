@class NSString, ACAccount;

@interface CalACMigrationAccount : NSObject <CalMigrationAccount>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) char dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) char enabledForCalendarsDataClass;
@property (nonatomic) char provisionedForCalendarsDataClass;
@property (nonatomic) char visible;
@property (nonatomic) char authenticated;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;
- (void)setPassword:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (id)parentAccountIdentifier;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (id)initWithACAccount:(id)a0;
- (id)accountTypeIdentifier;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;

@end
