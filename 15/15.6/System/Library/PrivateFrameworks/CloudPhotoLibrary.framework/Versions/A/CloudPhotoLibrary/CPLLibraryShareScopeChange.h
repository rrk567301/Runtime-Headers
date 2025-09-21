@class NSArray, NSSet, NSData, NSDate;

@interface CPLLibraryShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying> {
    NSSet *_exitingUserIdentifiers;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long exitRetentionPolicy;
@property (nonatomic) long long exitSource;
@property (copy, nonatomic) NSArray *exitingUserIdentifiers;
@property (readonly, nonatomic) long long exitState;
@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSData *userDefinedRules;
@property (copy, nonatomic) NSDate *userViewedParticipantTrashNotificationDate;

+ (id)descriptionForExitState:(long long)a0;
+ (char)serverSupportsLibraryShareSettingsRecordSyncing;
+ (char)serverSupportsLibraryShareSettingsUserViewedParticipantTrashNotificationDateSyncing;
+ (id)cplAdditionalSecureClassesForProperty:(id)a0;
+ (id)descriptionForExitType:(long long)a0;
+ (id)mappingForExitState;
+ (id)mappingForExitType;

- (void).cxx_destruct;
- (char)areSomeUsersExiting;
- (char)isUserWithIdentifierExiting:(id)a0;
- (id)_additionalDescription;
- (void)addExitingUserIdentifiers:(id)a0;
- (char)isCurrentUserExiting;
- (void)removePendingParticipantIDs:(id)a0;
- (char)shouldAlwaysUpdateScopeInfoWhenPossible;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(char *)a2;

@end
