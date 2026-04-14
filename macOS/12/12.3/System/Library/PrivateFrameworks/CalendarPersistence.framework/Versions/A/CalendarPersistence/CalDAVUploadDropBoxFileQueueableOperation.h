@class NSString, NSMutableDictionary, NSMutableSet, CALEntity;

@interface CalDAVUploadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVTaskGroupDelegate>

@property (retain) NSMutableSet *attendeePrincipalURLs;
@property (retain) NSMutableDictionary *attachments;
@property (retain) NSMutableDictionary *contentTypes;
@property (retain) NSString *dropBoxPath;
@property (retain) NSString *attachmentName;
@property (retain) CALEntity *masterEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performOperation;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)abortOperation;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 attachmentName:(id)a1 entity:(id)a2 fromSource:(id)a3;
- (BOOL)_isLowPriority;
- (id)_managedItemInContext:(id)a0;
- (id)_buildCustomErrorFromError:(id)a0 withStatusCode:(long long)a1 dataLength:(id)a2 inContext:(id)a3;
- (void)_cacheEtag:(id)a0 filename:(id)a1;
- (id)_serverURLForPath:(id)a0;
- (id)_fileNamesToUploadInContext:(id)a0;
- (void)_addDetailsForAttachmentWithFilename:(id)a0;
- (void)_updateAttachmentsInContext:(id)a0;

@end
