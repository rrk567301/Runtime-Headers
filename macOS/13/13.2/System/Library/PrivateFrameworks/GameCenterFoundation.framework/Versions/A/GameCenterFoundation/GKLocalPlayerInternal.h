@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

@property unsigned long long loginStatus;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)accountName;
- (void)setAccountName:(id)a0;
- (BOOL)isUnderage;
- (id)iCloudUserID;
- (void)setICloudUserID:(id)a0;
- (void)setNumberOfRequests:(unsigned short)a0;
- (unsigned short)numberOfRequests;
- (BOOL)hasAcknowledgedLatestGDPR;
- (id)facebookUserID;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (id)minimalInternal;
- (int)defaultFamiliarity;
- (void)setFacebookUserID:(id)a0;
- (BOOL)isPurpleBuddyAccount;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (BOOL)isDefaultNickname;
- (void)setDefaultNickname:(BOOL)a0;
- (BOOL)isDefaultPrivacyVisibility;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (BOOL)isDefaultContactsIntegrationConsent;
- (void)setDefaultContactsIntegrationConsent:(BOOL)a0;
- (void)setGlobalFriendListAccess:(int)a0;
- (void)setUnderage:(BOOL)a0;
- (BOOL)isFindable;
- (void)setFindable:(BOOL)a0;
- (BOOL)isPhotoPending;
- (void)setPhotoPending:(BOOL)a0;
- (unsigned short)numberOfTurns;
- (void)setNumberOfTurns:(unsigned short)a0;
- (unsigned short)numberOfChallenges;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (int)globalFriendListAccess;

@end
