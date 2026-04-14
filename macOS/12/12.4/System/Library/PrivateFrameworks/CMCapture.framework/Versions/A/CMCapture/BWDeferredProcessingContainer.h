@class BWPhotoManifest, NSObject;
@protocol OS_dispatch_queue;

@interface BWDeferredProcessingContainer : BWDeferredContainer {
    NSObject<OS_dispatch_queue> *_metadataPrefetchQueue;
    NSObject<OS_dispatch_queue> *_bufferPrefetchQueue;
}

@property (readonly, nonatomic) unsigned int ageSeconds;
@property (readonly, nonatomic) unsigned long long sizeBytes;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) unsigned int processingCount;
@property (readonly, nonatomic) BWPhotoManifest *photoManifest;

- (void)dealloc;
- (struct __CVBuffer { } *)copyBufferForTag:(id)a0 err:(int *)a1;
- (id)copyMetadataForTag:(id)a0 err:(int *)a1;
- (id)initWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 baseFolderURL:(id)a2 err:(int *)a3;
- (id)initWithXPCEncoding:(id)a0 applicationID:(id)a1 captureRequestIdentifier:(id)a2 baseFolderURL:(id)a3 err:(int *)a4;
- (BOOL)hasBufferForType:(unsigned long long)a0 portType:(id)a1;
- (id)copyMetadataForBufferTag:(id)a0 err:(int *)a1;
- (id)copyArrayForTag:(id)a0 customClasses:(id)a1 err:(int *)a2;
- (id)copyDictionaryForTag:(id)a0 err:(int *)a1;
- (struct __CVBuffer { } *)copyBufferForType:(unsigned long long)a0 portType:(id)a1 metadata:(id *)a2 err:(int *)a3;
- (id)copyBuffersForType:(unsigned long long)a0 portType:(id)a1 metadataArray:(id *)a2 err:(int *)a3;
- (id)copyAttributesForBufferType:(unsigned long long)a0 portType:(id)a1 err:(int *)a2;
- (void)releaseIntermediates;

@end
