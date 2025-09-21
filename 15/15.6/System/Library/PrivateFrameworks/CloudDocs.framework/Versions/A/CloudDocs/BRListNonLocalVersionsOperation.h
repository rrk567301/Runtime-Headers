@class NSString, NSMutableDictionary, NSURL, NSError, NSMutableArray, GSPermanentStorage;
@protocol BRNonLocalVersionSending;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {
    NSURL *_documentURL;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    id<BRNonLocalVersionSending> _sender;
    char _state;
}

@property (nonatomic, getter=isExecuting) char executing;
@property (nonatomic, getter=isFinished) char finished;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSMutableArray *versions;
@property (nonatomic) char includeCachedVersions;
@property (copy, nonatomic) id /* block */ fetchingVersionsDoneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithDocumentURL:(id)a0;
- (char)isConcurrent;
- (oneway void)newThumbnailForVersionWithEtag:(id)a0;
- (char)__advanceToState:(char)a0 result:(id)a1 error:(id)a2;
- (char)__finishIfCancelled;
- (void)_addVersion:(id)a0;
- (char)_advanceToState:(char)a0 result:(id)a1 error:(id)a2;
- (void)_senderInvalidate;
- (char)_setVersionStoreForDocumentAtURL:(id)a0 error:(id *)a1;
- (oneway void)newCachedVersionAtURL:(id)a0 size:(id)a1 etag:(id)a2 hasThumbnail:(char)a3 displayName:(id)a4 lastEditorDeviceName:(id)a5 lastEditorNameComponents:(id)a6 modificationDate:(id)a7;
- (oneway void)newFaultVersionAtURL:(id)a0 faultURL:(id)a1 faultExtension:(id)a2 etag:(id)a3 hasThumbnail:(char)a4 displayName:(id)a5 lastEditorDeviceName:(id)a6 lastEditorNameComponents:(id)a7 modificationDate:(id)a8;
- (oneway void)versionsDone;

@end
