@class ACAccount, EXSAccountMetadata;

@interface EXSAccount : NSObject

@property (retain) EXSAccountMetadata *accountMetadata;
@property (retain) ACAccount *acAccount;
@property (readonly) BOOL isDelegate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)emailAddress;
- (id)personaIdentifier;
- (long long)accountID;
- (id)accountKey;
- (id)ownerEmailAddress;
- (id)accountUsername;
- (id)initWithAccountMetadata:(id)a0 acAccount:(id)a1;
- (BOOL)acAccountChanged:(id)a0;
- (BOOL)enabledForTasks;
- (BOOL)enabledForCalendars;
- (BOOL)enabledForAnyInterestingDataclass;
- (id)internalHostURL;
- (id)externalHostURL;
- (BOOL)compareACAccount:(id)a0 withACAccount:(id)a1 forKey:(id)a2;
- (BOOL)compareOwnerEmailAddressToUser:(id)a0;
- (BOOL)compareHostNameToUser:(id)a0;
- (BOOL)compareUsernameToUser:(id)a0;
- (id)accountHostName;

@end
