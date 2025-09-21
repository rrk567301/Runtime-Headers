@class NSString, CKRecord, NSProgress;

@interface BRCCollaborationUploadOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecord *_record;
    NSProgress *_progress;
    unsigned long long _options;
}

@property (copy) id /* block */ uploadCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 progress:(id)a1 syncContext:(id)a2 sessionContext:(id)a3 options:(unsigned long long)a4;

@end
