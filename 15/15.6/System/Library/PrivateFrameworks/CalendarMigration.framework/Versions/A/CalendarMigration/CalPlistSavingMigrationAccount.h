@class NSString, NSMutableDictionary;
@protocol CalMigrationReadOnlyAccount;

@interface CalPlistSavingMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
}

@property (readonly, nonatomic) id<CalMigrationReadOnlyAccount> backingAccount;
@property (readonly, nonatomic) NSMutableDictionary *savedProperties;
@property (readonly, nonatomic) NSMutableDictionary *modifiedProperties;
@property (retain, nonatomic) NSString *identifier;
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
- (void)setPassword:(id)a0;
- (void)save;
- (id)accountPropertyForKey:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (id)accountTypeIdentifier;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (id)initWithIdentifier:(id)a0 accountTypeIdentifier:(id)a1 backingAccount:(id)a2 initialProperties:(id)a3;

@end
