@class NSString, CKRecord, NSProgress;

@interface BRCCollaborationUploadOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecord *_record;
    NSProgress *_progress;
}

@property (copy) id /* block */ uploadCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
