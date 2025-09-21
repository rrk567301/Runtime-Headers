@class NSString, NSMutableDictionary, NSArray, NSData, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface PKPayloadCopier : NSObject {
    void *_bomCopier;
    void *_bomSys;
    NSMutableDictionary *_bomCopierOptions;
    NSString *_sourcePath;
    unsigned long long _offset;
    NSString *_destinationPath;
    char _isDestinationArchive;
    unsigned long long _payloadFormat;
    char _payloadLargeAndSegmented;
    unsigned long long _payloadSize;
    char _holePunchPayload;
    int _inputArchiveFD;
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
    NSData *_expectedInputChecksum;
    NSString *_expectedInputChecksumType;
    unsigned long long _expectedArchiveSize;
    NSData *_parallelCompressionChecksum;
    char _isExecuting;
    char _didCancel;
    NSError *_error;
}

+ (id)_defaultBomCopierOptions;
+ (id)_defaultBomCopierOptionsForArchiving;
+ (id)_defaultBomCopierOptionsForExtraction;
+ (unsigned long long)payloadFormatForName:(id)a0;

- (void)dealloc;
- (void)run;
- (id)error;
- (void)start;
- (void)cancel;
- (char)isExecuting;
- (void)setPayloadFormat:(unsigned long long)a0;
- (void)setPayloadSize:(unsigned long long)a0;
- (void)setCopiesOwnershipFromIndexBom:(char)a0;
- (id)initWithArchivePath:(id)a0 offset:(unsigned long long)a1 destination:(id)a2;
- (id)initWithRootPath:(id)a0 destination:(id)a1;
- (id)initWithRootPath:(id)a0 destinationArchive:(id)a1;
- (id)initWithXARArchive:(id)a0 payloadSubpath:(id)a1 destination:(id)a2;
- (unsigned long long)itemsComplete;
- (void)setAllowPaths:(id)a0;
- (void)setCopiesQuarantine:(char)a0;
- (void)setHFSPlusCompressionEnabled:(char)a0 withBackwardsIncompatibleFormat:(char)a1;
- (void)setHolePunchPayload:(char)a0;
- (void)setIndexBomPath:(id)a0;
- (void)setItemCopiedHandlerOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)setItemWillCopyHandlerOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)setItemWillCopyHandlerWithBlock:(id /* block */)a0;
- (void)setMaskPaths:(id)a0;
- (void)setPayloadIsLargeAndSegmented:(char)a0;
- (void)setPreservesACLs:(char)a0;
- (void)setPreservesExtAttrs:(char)a0;
- (void)setPreservesSourceParentName:(char)a0;
- (unsigned long long)writtenBytesComplete;

@end
