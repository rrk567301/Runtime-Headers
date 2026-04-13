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
- (id)emailAddresses;
- (void)setEmailAddresses:(id)a0;
- (void)setAccountName:(id)a0;
- (BOOL)isUnderage;
- (id)iCloudUserID;
- (void)setICloudUserID:(id)a0;
- (void)setNumberOfRequests:(unsigned short)a0;
- (unsigned short)numberOfRequests;
- (id)minimalInternal;
- (BOOL)isLocalPlayer;
- (BOOL)isDefaultNickname;
- (void)setDefaultNickname:(BOOL)a0;
- (BOOL)isDefaultPrivacyVisibility;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setUnderage:(BOOL)a0;
- (unsigned short)numberOfTurns;
- (void)setNumberOfTurns:(unsigned short)a0;
- (id)facebookUserID;
- (int)globalFriendListAccess;
- (unsigned short)numberOfChallenges;
- (int)defaultFamiliarity;
- (BOOL)isFriend;
- (BOOL)isPurpleBuddyAccount;
- (BOOL)isFindable;
- (BOOL)isPhotoPending;
- (void)setGlobalFriendListAccess:(int)a0;
- (void)setFacebookUserID:(id)a0;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (void)setFindable:(BOOL)a0;
- (void)setPhotoPending:(BOOL)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;

@end
