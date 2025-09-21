@class NSString, NSMutableDictionary;

@interface CalAccountsDatabaseMigrationReadOnlyAccount : NSObject <CalMigrationReadOnlyAccount> {
    NSString *_identifier;
    NSString *_parentAccountIdentifier;
    NSString *_accountTypeIdentifier;
    NSMutableDictionary *_accountProperties;
}

@property (readonly, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) char enabledForCalendarsDataClass;
@property (readonly, nonatomic) char provisionedForCalendarsDataClass;
@property (readonly, nonatomic) char visible;
@property (readonly, nonatomic) char authenticated;
@property (readonly, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;
- (id)accountPropertyForKey:(id)a0;
- (id)parentAccountIdentifier;
- (id)accountTypeIdentifier;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 accountTypeIdentifier:(id)a2 description:(id)a3 enabledForCalendarDataClass:(char)a4 provisionedForCalendarDataClass:(char)a5 visible:(char)a6 authenticated:(char)a7 username:(id)a8 properties:(id)a9;

@end
