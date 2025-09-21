@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSkyAddMessageAttachmentsAndMigrateAttachmentsTableUpgradeStep : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0 dataProvider:(id)a1;
+ (char)createMessageAttachmentsTableWithConnection:(id)a0;
+ (char)createNewAttachmentTableWithConnection:(id)a0;
+ (char)createNewSearchableAttachmentsTable:(id)a0;
+ (char)deleteAttachmentsTableWithConnection:(id)a0;
+ (char)deleteMessageAttachmentsTableWithConnection:(id)a0;
+ (char)insertAttachmentIntoAttachmentTableWithAttachmentMetadata:(id)a0 connection:(id)a1;
+ (char)insertIntoMessageAttachmentTableGlobalMessageID:(id)a0 attachmentMetadata:(id)a1 attachmentID:(long long)a2 connection:(id)a3;
+ (int)runWithConnection:(id)a0;


@end
