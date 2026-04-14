@interface IMDMessageAutomaticHistoryDeletion : NSObject

+ (void)cleanUpOrphanAttachments;
+ (void)deleteMessagesAndAttachmentsAfterDays:(long long)a0;
+ (void)deleteRecoverableMessagesEligibleForPermanentRemoval;
+ (void)cleanDatabase;
+ (void)deleteSpolightArchivedFiles;
+ (void)deleteDirectoryAtPath:(id)a0;
+ (BOOL)isFileAtDirPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isFileHeaderDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isDirCreationDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isOlderThanDays:(long long)a0 fromDate:(id)a1;
+ (id)_getPathAttributesForPath:(id)a0;
+ (id)_getDirSubDirURLsForDirPath:(id)a0 error:(id *)a1;
+ (id)_getiChatFileMetadataForPath:(id)a0;
+ (id)_getFilePathNotDSStore:(id)a0;

@end
