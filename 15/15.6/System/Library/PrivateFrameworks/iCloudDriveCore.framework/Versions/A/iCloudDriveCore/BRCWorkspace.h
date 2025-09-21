@interface BRCWorkspace : NSObject

+ (char)brc_openDirectoryAtURL:(id)a0 error:(id *)a1;
+ (char)brc_openDocumentAtURL:(id)a0 appURL:(id)a1 error:(id *)a2;
+ (char)brc_openDocumentAtURL:(id)a0 appURL:(id)a1 isSharedDocs:(char)a2 error:(id *)a3;

@end
