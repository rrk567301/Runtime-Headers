@class NSString;

@interface CNMockContactsLogger : NSObject <CNContactsLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)serviceError:(id)a0;
- (void)requestingProviderDomainCommand:(id /* block */)a0;
- (void)requestingAccessForContacts:(id /* block */)a0;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)internalError:(id)a0;
- (void)sendCommLimitsQuestionForHandles:(id)a0;
- (void)fetchingContactIdentifierWithMatchingDictionary:(id /* block */)a0;
- (void)unregisteringForChangeHistory:(id /* block */)a0;
- (void)changedMeContact:(id)a0;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)a0;
- (void)deleteImageRecentsMetadataRequestFailed:(id)a0;
- (void)didFetchContacts:(id)a0 error:(id)a1;
- (void)saveRequestedZeroingHandleCounts:(id)a0;
- (void)failedToApplyContactUpdateOfKind:(const char *)a0 value:(id)a1 property:(id)a2 error:(id)a3;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)a0;
- (void)fetchingContactSectionCounts:(id /* block */)a0;
- (void)fetchingContactsBatch:(id /* block */)a0;
- (void)postingNotificationWithName:(id)a0;
- (void)updatingContact:(id)a0;
- (void)fetchContactsMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)saveRequestFailed:(id)a0;
- (void)resettingSortDataIfNeeded:(id /* block */)a0;
- (void)accessAuthorizationStatusWasDenied;
- (void)setContactImageData:(id)a0 format:(const char *)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)settingDefaultAccount:(id /* block */)a0;
- (void)fetchingGroups:(id /* block */)a0;
- (void)errorWhenQueryingTetheredSyncData:(id)a0;
- (void)fetchingMeContactIdentifier:(id /* block */)a0;
- (void)XPCConnectionWasInterruptedForService:(id)a0;
- (void)didFetchEncodedContacts:(id)a0 error:(id)a1;
- (void)requestAuthorizationWasDenied;
- (void)fetchingContactWithUserActivity:(id /* block */)a0;
- (void)servicingContactsRequest:(id /* block */)a0;
- (void)fetchingContactCount:(id /* block */)a0;
- (void)contactsAccessWasDeniedWithError:(id)a0;
- (void)fetchingContainers:(id /* block */)a0;
- (void)XPCConnectionWasInvalidatedForService:(id)a0;
- (void)deletingContact:(id)a0;
- (void)gettingBackgroundColor:(id /* block */)a0;
- (void)applyContactUpdateOfKind:(const char *)a0 value:(id)a1 property:(id)a2;
- (void)setContactImageData:(id)a0;
- (void)fetchingContacts:(id /* block */)a0;
- (void)postingNotification:(id /* block */)a0;
- (void)clearingChangeHistory:(id /* block */)a0;
- (void)fetchEncodedContactsMatchingPredicate:(id)a0 unifyResults:(BOOL)a1 keysToFetch:(id)a2;
- (void)saveRequestInvalid:(id)a0;
- (void)deletePosterRecentsMetadataRequestFailed:(id)a0;
- (void)contactsAccessWasGranted;
- (void)removeContactImageData;
- (void)addingContacts:(id)a0 toContainerWithIdentifier:(id)a1;
- (void)fetchingDefaultContainerIdentifier:(id /* block */)a0;
- (void)saveUpdatedSharedPhotoDisplayPreferenceFrom:(id)a0 to:(id)a1;
- (void)registeringForChangeHistory:(id /* block */)a0;
- (void)fetchingChangeHistory:(id /* block */)a0;
- (void)changingMeContact:(id /* block */)a0;
- (void)saving:(id /* block */)a0;
- (void)setContactImageDataZeroCropRect:(id)a0 format:(const char *)a1;

@end
