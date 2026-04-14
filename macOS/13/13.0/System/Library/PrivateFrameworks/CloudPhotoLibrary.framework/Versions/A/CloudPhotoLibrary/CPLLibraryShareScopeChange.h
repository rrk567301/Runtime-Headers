@class NSArray, NSSet, NSData, NSDate;

@interface CPLLibraryShareScopeChange : CPLScopeChange <NSSecureCoding, NSCopying> {
    NSSet *_exitingUserIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long exitRetentionPolicy;
@property (nonatomic) long long exitSource;
@property (copy, nonatomic) NSArray *exitingUserIdentifiers;
@property (readonly, nonatomic) long long exitState;
@property (nonatomic) long long exitType;
@property (copy, nonatomic) NSData *userDefinedRules;
@property (copy, nonatomic) NSDate *userViewedParticipantTrashNotificationDate;

+ (id)descriptionForExitState:(long long)a0;
+ (BOOL)serverSupportsLibraryShareSettingsRecordSyncing;
+ (BOOL)serverSupportsLibraryShareSettingsUserViewedParticipantTrashNotificationDateSyncing;
+ (id)mappingForExitState;
+ (id)mappingForExitType;
+ (id)descriptionForExitType:(long long)a0;
+ (id)cplAdditionalSecureClassesForProperty:(id)a0;

- (void).cxx_destruct;
- (BOOL)isUserWithIdentifierExiting:(id)a0;
- (BOOL)areSomeUsersExiting;
- (id)_additionalDescription;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(BOOL *)a2;
- (BOOL)shouldAlwaysUpdateScopeInfoWhenPossible;
- (BOOL)isCurrentUserExiting;
- (void)addExitingUserIdentifiers:(id)a0;
- (void)removePendingParticipantIDs:(id)a0;

@end
