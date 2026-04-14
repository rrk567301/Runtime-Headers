@class ACAccount, EXSAccountMetadata;

@interface EXSAccount : NSObject

@property (retain) EXSAccountMetadata *accountMetadata;
@property (retain) ACAccount *acAccount;
@property (readonly) BOOL isDelegate;

+ (unsigned long long)delegateDataclassesOfInterest;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)emailAddress;
- (unsigned long long)enabledDataclasses;
- (id)personaIdentifier;
- (long long)accountID;
- (id)accountKey;
- (id)ownerEmailAddress;
- (id)accountUsername;
- (id)accountHostName;
- (BOOL)compareOwnerEmailAddressToUser:(id)a0;
- (id)externalHostURL;
- (id)internalHostURL;
- (BOOL)acAccountChanged:(id)a0;
- (BOOL)accountEnabledForDataclass:(unsigned long long)a0;
- (BOOL)accountValidForSubscription;
- (BOOL)compareACAccount:(id)a0 withACAccount:(id)a1 forKey:(id)a2;
- (BOOL)compareHostNameToUser:(id)a0;
- (BOOL)compareUsernameToUser:(id)a0;
- (BOOL)enabledForAnyInterestingDataclass;
- (id)initWithAccountMetadata:(id)a0 acAccount:(id)a1;

@end
