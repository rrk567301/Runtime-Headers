@class IXPromisedStreamingZipTransferSeed, SZExtractor, NSString;
@protocol SZExtractorDelegate;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed;
@property (nonatomic, getter=isComplete) char complete;
@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (retain, nonatomic) SZExtractor *extractor;
@property (nonatomic) char needsConsume;
@property (readonly, nonatomic) char useProgressFromSZExtractor;
@property (readonly, nonatomic) char doesConsumeExtractedData;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)doesConsumeExtractedData;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithSeed:(id)a0;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (void)prepareForExtraction:(id /* block */)a0;
- (void)setExtractionProgress:(double)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (void)_prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)addArchiveBytesConsumed:(unsigned long long)a0;
- (unsigned long long)archiveBytesConsumed;
- (char)consumeExtractedDataIfNeeded;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 streamingZipOptions:(id)a2 archiveSize:(unsigned long long)a3 diskSpaceNeeded:(unsigned long long)a4;
- (Class)seedClass;
- (void)setArchiveBytesConsumed:(unsigned long long)a0;

@end
