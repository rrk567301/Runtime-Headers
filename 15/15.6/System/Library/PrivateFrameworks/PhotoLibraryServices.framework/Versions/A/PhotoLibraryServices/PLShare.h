@class NSString, NSSet, NSURL, NSDate;

@interface PLShare : PLManagedObject <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *scopeIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSDate *trashedDate;
@property (nonatomic) short status;
@property (nonatomic) long long scopeType;
@property (nonatomic) long long publicPermission;
@property (nonatomic) short localPublishState;
@property (nonatomic) short trashedState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) NSSet *participants;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (id)shareWithScopeIdentifier:(id)a0 includeTrashed:(char)a1 inManagedObjectContext:(id)a2;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
+ (id)insertInPhotoLibrary:(id)a0;
+ (id)shareWithShareURL:(id)a0 includeTrashed:(char)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithUUID:(id)a0 includeTrashed:(char)a1 inManagedObjectContext:(id)a2;
+ (id)sharesWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (long long)_cloudDeletionTypeForScopeType:(long long)a0;
+ (void)_abortIfCalledOnBaseClass;
+ (id)_basePredicateIncludeTrashedShares:(char)a0;
+ (long long)_cloudDeletionTypeForStatus:(short)a0;
+ (id)_registeredSubclasses;
+ (char)_shouldRecordCloudDeletionForShare:(id)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (void)deleteAllSharesInManagedObjectContext:(id)a0;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)a0;
+ (void)deleteOldTrashedSharesInManagedObjectContext:(id)a0;
+ (void)fetchShareFromShareURL:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
+ (char)getShareIfNecessary:(id *)a0 forCPLRecordWithClass:(Class)a1 scopedIdentifier:(id)a2 inLibrary:(id)a3;
+ (char)incrementallyDeleteAndSaveShares:(id)a0 logMessagePrefix:(id)a1 error:(id *)a2;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (id)scopeIdentifierPrefix;
+ (id)shareWithScopeIdentifiers:(id)a0 includeTrashed:(char)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithScopedIdentifier:(id)a0 includeTrashed:(char)a1 inManagedObjectContext:(id)a2;
+ (char)shouldAllowFetchURLWithScopeChange:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (char)supportsCPLScopeType:(long long)a0;
+ (char)validateCPLScopeChange:(id)a0;

- (id)owner;
- (id)currentUserParticipant;
- (void)prepareForDeletion;
- (id)compactDescription;
- (id)_statusDescription;
- (void)untrash;
- (char)incrementallyDeleteAndSaveWithError:(id *)a0;
- (void)trash;
- (void)_updateShareStatusWithCurrentUser:(id)a0;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (void)autoAcceptShareIfNecessary;
- (id)cplScopeChange;
- (char)isCurrentUserOwner;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (void)updateShareWithCPLShare:(id)a0 inPhotoLibrary:(id)a1;

@end
