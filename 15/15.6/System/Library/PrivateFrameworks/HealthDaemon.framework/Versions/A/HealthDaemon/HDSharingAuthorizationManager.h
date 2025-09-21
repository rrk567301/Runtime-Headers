@class NSMutableDictionary, HDProfile, HKSynchronousObserverSet;

@interface HDSharingAuthorizationManager : NSObject <HDCloudSyncSharingAuthorizationManager> {
    HDProfile *_profile;
    HKSynchronousObserverSet *_observers;
    NSMutableDictionary *_addedAuthorizationsByRecipient;
    NSMutableDictionary *_removedAuthorizationsByRecipient;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (char)markSharingAuthorizationsForDeletion:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (char)addSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (void)deleteMarkedSharingAuthorizations;
- (char)insertOrUpdateCodableRelationships:(id)a0 syncProvenance:(long long)a1 error:(id *)a2;
- (char)insertOrUpdateRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1 dateModified:(id)a2 syncProvenance:(long long)a3 syncIdentity:(long long)a4 databaseTransaction:(id)a5 error:(id *)a6;
- (id)recipientIdentifiersForSharingAuthorizations:(id)a0 error:(id *)a1;
- (char)removeSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (char)revokeRecipientWithIdentifier:(id)a0 error:(id *)a1;
- (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 error:(id *)a1;
- (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)a0 error:(id *)a1;
- (char)updateAuthorizationsForRecipientIdentifier:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToRemove:(id)a2 error:(id *)a3;

@end
