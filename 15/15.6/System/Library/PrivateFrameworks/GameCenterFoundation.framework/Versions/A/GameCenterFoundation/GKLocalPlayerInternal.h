@class NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
    char allowChallengeFriendInvites;
    char allowMultiplayerFriendInvites;
    char _allowChallengeFriendInvites;
    char _allowMultiplayerFriendInvites;
}

@property unsigned long long loginStatus;

+ (char)supportsSecureCoding;
+ (id)minimalInternalFromSourcePlayer:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)accountName;
- (void)setAccountName:(id)a0;
- (char)isUnderage;
- (unsigned short)numberOfRequests;
- (void)setNumberOfRequests:(unsigned short)a0;
- (char)hasAcknowledgedLatestGDPR;
- (id)minimalInternal;
- (void)setAllowChallengeFriendInvites:(char)a0;
- (char)allowChallengeFriendInvites;
- (char)allowMultiplayerFriendInvites;
- (int)defaultFamiliarity;
- (int)globalFriendListAccess;
- (char)isDefaultContactsIntegrationConsent;
- (char)isDefaultNickname;
- (char)isDefaultPrivacyVisibility;
- (char)isFindable;
- (char)isFriend;
- (char)isLocalPlayer;
- (char)isPhotoPending;
- (char)isPurpleBuddyAccount;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfTurns;
- (void)setAllowMultiplayerFriendInvites:(char)a0;
- (void)setDefaultContactsIntegrationConsent:(char)a0;
- (void)setDefaultNickname:(char)a0;
- (void)setDefaultPrivacyVisibility:(char)a0;
- (void)setFindable:(char)a0;
- (void)setGlobalFriendListAccess:(int)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (void)setNumberOfTurns:(unsigned short)a0;
- (void)setPhotoPending:(char)a0;
- (void)setPurpleBuddyAccount:(char)a0;
- (void)setUnderage:(char)a0;

@end
