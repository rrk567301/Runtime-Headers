@class NSMutableDictionary, HDProfile, HKSynchronousObserverSet;

@interface HDSharingAuthorizationManager : NSObject {
    HDProfile *_profile;
    HKSynchronousObserverSet *_observers;
    NSMutableDictionary *_addedAuthorizationsByRecipient;
    NSMutableDictionary *_removedAuthorizationsByRecipient;
}

- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)markSharingAuthorizationsForDeletion:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (BOOL)addSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (void)deleteMarkedSharingAuthorizations;
- (BOOL)insertOrUpdateCodableRelationships:(id)a0 syncProvenance:(long long)a1 error:(id *)a2;
- (id)recipientIdentifiersForSharingAuthorizations:(id)a0 error:(id *)a1;
- (BOOL)removeSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 error:(id *)a2;
- (BOOL)revokeRecipientWithIdentifier:(id)a0 error:(id *)a1;
- (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 error:(id *)a1;
- (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)a0 error:(id *)a1;
- (BOOL)updateAuthorizationsForRecipientIdentifier:(id)a0 sharingAuthorizationsToAdd:(id)a1 sharingAuthorizationsToRemove:(id)a2 error:(id *)a3;

@end
