@class ACAccount, EXSAccountMetadata;

@interface EXSAccount : NSObject

@property (retain) EXSAccountMetadata *accountMetadata;
@property (retain) ACAccount *acAccount;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)personaIdentifier;
- (long long)accountID;
- (id)accountKey;
- (id)myEmailAddress;
- (id)internalHostURL;
- (id)externalHostURL;
- (BOOL)enabledForTasks;
- (BOOL)enabledForCalendars;
- (BOOL)compareEmailAddressToUser:(id)a0;
- (BOOL)compareACAccount:(id)a0 withACAccount:(id)a1 forKey:(id)a2;
- (id)initWithAccountMetadata:(id)a0 acAccount:(id)a1;
- (BOOL)acAccountChanged:(id)a0;

@end
