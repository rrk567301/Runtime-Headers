@class NSString, NSMutableDictionary, NSArray, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface PKPayloadCopier : NSObject {
    void *_bomCopier;
    void *_bomSys;
    NSMutableDictionary *_bomCopierOptions;
    NSString *_sourcePath;
    unsigned long long _offset;
    NSString *_destinationPath;
    BOOL _isDestinationArchive;
    unsigned long long _payloadFormat;
    BOOL _payloadLargeAndSegmented;
    unsigned long long _payloadSize;
    NSArray *_maskPaths;
    NSArray *_allowPaths;
    id /* block */ _itemWillCopyHandler;
    NSObject<OS_dispatch_queue> *_itemWillCopyQueue;
    id /* block */ _itemCopiedHandler;
    NSObject<OS_dispatch_queue> *_itemCopiedQueue;
    unsigned long long _fullCompleteBytes;
    unsigned long long _fullCompleteCount;
    long long _partialFileLength;
    NSObject<OS_dispatch_queue> *_updateQueue;
    BOOL _isExecuting;
    BOOL _didCancel;
    NSError *_error;
}

+ (unsigned long long)payloadFormatForName:(id)a0;
+ (id)_defaultBomCopierOptions;
+ (id)_defaultBomCopierOptionsForExtraction;
+ (id)_defaultBomCopierOptionsForArchiving;

- (void)run;
- (void)dealloc;
- (id)error;
- (void)start;
- (void)cancel;
- (void)_setError:(id)a0;
- (BOOL)isExecuting;
- (void)setPayloadFormat:(unsigned long long)a0;
- (void)setPayloadSize:(unsigned long long)a0;
- (id)initWithArchivePath:(id)a0 offset:(unsigned long long)a1 destination:(id)a2;
- (void)setPayloadIsLargeAndSegmented:(BOOL)a0;
- (id)initWithRootPath:(id)a0 destination:(id)a1;
- (void)setAllowPaths:(id)a0;
- (id)initWithRootPath:(id)a0 destinationArchive:(id)a1;
- (void)setIndexBomPath:(id)a0;
- (void)setCopiesOwnershipFromIndexBom:(BOOL)a0;
- (void)setPreservesExtAttrs:(BOOL)a0;
- (void)setPreservesACLs:(BOOL)a0;
- (unsigned long long)writtenBytesComplete;
- (void)setHFSPlusCompressionEnabled:(BOOL)a0 withBackwardsIncompatibleFormat:(BOOL)a1;
- (void)setMaskPaths:(id)a0;
- (void)setItemWillCopyHandlerOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)setItemCopiedHandlerOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)_initWithSourcePath:(id)a0 offset:(unsigned long long)a1 destination:(id)a2;
- (void)_extractMain:(id)a0;
- (BOOL)_hasLZMABlockCompressedCPIOArchiveWithError:(id *)a0;
- (id)_startLZMABlockCompressorAndSignalWhenDone:(id)a0;
- (void)setPreservesSourceParentName:(BOOL)a0;
- (void)setCopiesQuarantine:(BOOL)a0;
- (void)setItemWillCopyHandlerWithBlock:(id /* block */)a0;
- (unsigned long long)itemsComplete;

@end
