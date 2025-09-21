@class ACAccount, EXSAccountMetadata;

@interface EXSAccount : NSObject

@property (retain) EXSAccountMetadata *accountMetadata;
@property (retain) ACAccount *acAccount;
@property (readonly) char isDelegate;

+ (id)log;
+ (unsigned long long)delegateDataclassesOfInterest;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)enabledDataclasses;
- (id)personaIdentifier;
- (long long)accountID;
- (id)emailAddress;
- (id)accountKey;
- (id)ownerEmailAddress;
- (id)accountUsername;
- (id)externalHostURL;
- (id)internalHostURL;
- (id)accountHostName;
- (char)compareOwnerEmailAddressToUser:(id)a0;
- (char)acAccountChanged:(id)a0;
- (char)accountEnabledForDataclass:(unsigned long long)a0;
- (char)accountValidForSubscription;
- (char)compareACAccount:(id)a0 withACAccount:(id)a1 forKey:(id)a2;
- (char)compareHostNameToUser:(id)a0;
- (char)compareUsernameToUser:(id)a0;
- (char)enabledForAnyInterestingDataclass;
- (id)initWithAccountMetadata:(id)a0 acAccount:(id)a1;

@end
