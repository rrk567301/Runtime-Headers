@class NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface ICDocCamPDFGenerator : NSObject

@property (class, readonly) NSObject<OS_dispatch_queue> *syncGeneratorQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *fileQueue;
@property (class, readonly) NSFileManager *fileManager;

+ (id)rootPDFFolderPath;
+ (id)rootPDFFolderPathForPWAttachments;
+ (id)folderPathForAttachmentIdentifier:(id)a0 passwordProtected:(BOOL)a1;
+ (id)folderPathForAttachment:(id)a0;
+ (id)versionFolderPathForAttachment:(id)a0;
+ (id)versionPDFPathForAttachment:(id)a0;
+ (void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)a0;
+ (void)deletePDFFolderIfExistsForAttachment:(id)a0;
+ (void)deletePDFForAttachmentIfExists:(id)a0;
+ (void)deleteAllDocCamPDFs;
+ (void)deleteAllDocCamPasswordProtectedPDFs;
+ (id)pdfURLForAttachment:(id)a0;
+ (void)generatePDFsIfNecessaryForGalleryAttachments:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
+ (id)blockingGeneratePDFURLForAttachment:(id)a0 withProgress:(id)a1 error:(id *)a2;
+ (id)blockingGeneratePDFDataForAttachment:(id)a0 withProgress:(id)a1 queue:(id)a2 error:(id *)a3;
+ (void)performPDFGenerationWithGenerator:(id)a0 galleryModel:(id)a1 progress:(id)a2;

@end
