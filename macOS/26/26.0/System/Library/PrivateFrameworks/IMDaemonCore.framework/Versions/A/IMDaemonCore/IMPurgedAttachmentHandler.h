@interface IMPurgedAttachmentHandler : NSObject {
    void /* unknown type, empty encoding */ currentBatch;
    void /* unknown type, empty encoding */ batchSize;
    void /* unknown type, empty encoding */ attachmentPaths;
    void /* unknown type, empty encoding */ successfullyDeletedLivePhotoComponents;
    void /* unknown type, empty encoding */ livePhotoComponentDeletionFailures;
    void /* unknown type, empty encoding */ livePhotoBundleOrComponentPaths;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)complete;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBatchSize:(long long)a0;
- (void)registerPurgedAttachmentAtPath:(id)a0;

@end
