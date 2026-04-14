@interface CalAttachmentCache : NSObject

+ (void)removeAttachment:(id)a0;
+ (id)cacheDirectoryForAttachmentsInEntityWithSharedUID:(id)a0 sourcePath:(id)a1;
+ (BOOL)addAttachment:(id)a0 toEntityWithSharedUID:(id)a1 sourcePath:(id)a2;
+ (id)etagForAttachment:(id)a0 inEntityWithSharedUID:(id)a1 sourcePath:(id)a2;
+ (void)setEtag:(id)a0 forAttachment:(id)a1 inEntityWithSharedUID:(id)a2 sourcePath:(id)a3;
+ (BOOL)moveCacheDirectoryForEntityWithSharedUID:(id)a0 fromSourcePath:(id)a1 toSourcePath:(id)a2;
+ (id)pathToAttachment:(id)a0;
+ (id)_etagCacheForEntityAttachmentsSharedUID:(id)a0 sourcePath:(id)a1;
+ (id)pathToAttachmentCacheForCalendarItem:(id)a0 inCalendar:(id)a1;
+ (id)pathToAttachmentWithICalURL:(id)a0;
+ (id)pathToAttachment:(id)a0 inCalendar:(id)a1;
+ (BOOL)_validateAttachmentForCaching:(id)a0;
+ (id)icalURLForAttachment:(id)a0 inCalendar:(id)a1 filename:(id)a2;
+ (BOOL)_writeAttachment:(id)a0 inCalendar:(id)a1 originalURL:(id)a2 overwriteExisting:(BOOL)a3;
+ (BOOL)isAttachmentCachedWithFileName:(id)a0 forSharedUID:(id)a1 inSourcePath:(id)a2;
+ (BOOL)isAttachmentUnarchivedWithFileName:(id)a0 forSharedUID:(id)a1 inSourcePath:(id)a2;
+ (unsigned long long)etagEntriesForEntityWithSharedUID:(id)a0 sourcePath:(id)a1;
+ (id)etagFileNameAtIndex:(unsigned long long)a0 inEntityWithSharedUID:(id)a1 sourcePath:(id)a2;
+ (id)pathToAttachmentCacheForCalendarItem:(id)a0;
+ (void)setQuarantineProperties:(id)a0 forCalendarItem:(id)a1 inCalendar:(id)a2;
+ (BOOL)addAttachment:(id)a0 inCalendar:(id)a1 overwriteExisting:(BOOL)a2;
+ (void)removeCacheDirectory:(id)a0;

@end
