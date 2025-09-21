@interface HDSharingAuthorizationsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (char)addSharingAuthorizations:(id)a0 forRecipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteAllMarkedSharingAuthorizationsWithTransaction:(id)a0 error:(id *)a1;
+ (char)deleteAllSharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (char)deleteSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (char)insertOrReplaceWithRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (char)markSharingAuthorizationsForDeletion:(id)a0 recipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (id)recipientIdentifiersForSharingAuthorization:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 includeMarkedForDeletion:(char)a2 error:(id *)a3;
+ (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

@end
