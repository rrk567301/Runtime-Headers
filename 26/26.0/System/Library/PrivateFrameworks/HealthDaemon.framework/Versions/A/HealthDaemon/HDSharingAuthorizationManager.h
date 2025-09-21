@class NSMutableDictionary, HDProfile, HKSynchronousObserverSet;

@interface HDSharingAuthorizationManager : NSObject <HDCloudSyncSharingAuthorizationManager> {
    HDProfile *_profile;
    HKSynchronousObserverSet *_observers;
    NSMutableDictionary *_addedAuthorizationsByRecipient;
    NSMutableDictionary *_removedAuthorizationsByRecipient;
}

- (id)initWithProfile:(id)a0;
- (void)deleteMarkedSharingAuthorizations;
- (void)unregisterObserver:(id)a0;
- (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0;
- (BOOL)insertOrUpdateCodableRelationships:(id)a0 syncProvenance:(long long)a1 error:(id *)a2;
- (BOOL)revokeRecipientWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (BOOL)markSharingAuthorizationsForDeletion:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (BOOL)addSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)a0 error:(id *)a1;
- (BOOL)insertOrUpdateRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1 dateModified:(id)a2 syncProvenance:(long long)a3 syncIdentity:(long long)a4 databaseTransaction:(id)a5 error:(id *)a6;
- (BOOL)updateAuthorizationsForRecipientIdentifier:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToRemove:(id)a2 error:(id *)a3;
- (id)recipientIdentifiersForSharingAuthorizations:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
