@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount;

@interface CalChangeFilteringMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
    NSString *_accountIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *modifiedPropertyValues;
@property (readonly, nonatomic) id<CalMigrationAccount> backingAccount;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
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
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (id)accountTypeIdentifier;
- (id)initWithAccountIdentifier:(id)a0 accountTypeIdentifier:(id)a1;
- (id)initWithBackingAccount:(id)a0;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;

@end
