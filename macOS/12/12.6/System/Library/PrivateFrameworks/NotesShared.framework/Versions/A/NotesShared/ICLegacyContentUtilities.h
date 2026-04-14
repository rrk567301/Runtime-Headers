@interface ICLegacyContentUtilities : NSObject

+ (id)createAttachmentForNote:(id)a0 withName:(id)a1 context:(id)a2;
+ (id)suggestedFilenameForURL:(id)a0 mimeType:(id)a1;
+ (id)contentStringFromWebArchive:(id)a0;
+ (id)generateContentID;
+ (void)addAttachmentFromWebResource:(id)a0 toNote:(id)a1 context:(id)a2;
+ (id)newNoteBasedOnModernNote:(id)a0 inFolder:(id)a1 context:(id)a2;

@end
