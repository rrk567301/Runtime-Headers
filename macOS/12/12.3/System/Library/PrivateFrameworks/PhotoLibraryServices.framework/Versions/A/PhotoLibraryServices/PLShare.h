@class NSString, NSSet, NSURL, NSDate;

@interface PLShare : PLManagedObject <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *scopeIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSDate *expiryDate;
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
+ (id)shareWithUUID:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)insertInPhotoLibrary:(id)a0;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
+ (id)predicateToExcludeTrashedShares;
+ (id)predicateToExcludeExpiredShares;
+ (id)shareWithScopeIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithShareURL:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (void)deleteAllSharesInManagedObjectContext:(id)a0;
+ (void)fetchShareFromShareURL:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_abortIfCalledOnBaseClass;
+ (id)scopeIdentifierPrefix;
+ (id)_basePredicateIncludeTrashedShares:(BOOL)a0;
+ (id)sharesWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (id)_registeredSubclasses;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (long long)_cloudDeletionTypeForScopeType:(long long)a0;
+ (long long)_cloudDeletionTypeForStatus:(short)a0;
+ (id)shareWithScopedIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)a0;

- (id)owner;
- (void)prepareForDeletion;
- (id)compactDescription;
- (id)_statusDescription;
- (void)trash;
- (id)cplScopeChange;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (void)autoAcceptShareIfNecessary;
- (void)_updateShareStatusWithCurrentUser:(id)a0;
- (void)updateShareWithCPLShare:(id)a0 inPhotoLibrary:(id)a1;

@end
