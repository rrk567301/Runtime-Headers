@class SZExtractor, IXPromisedOutOfBandStreamingZipTransferSeed, NSURL, NSString;
@protocol SZExtractorDelegate;

@interface IXPromisedOutOfBandStreamingZipTransfer : IXOpaqueDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IXPromisedOutOfBandStreamingZipTransferSeed *seed;
@property (nonatomic, getter=isComplete) char complete;
@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (retain, nonatomic) SZExtractor *extractor;
@property (readonly, nonatomic) char useProgressFromSZExtractor;
@property (readonly, nonatomic) NSURL *extractionPath;
@property (weak, nonatomic) id<SZExtractorDelegate> extractorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char doesConsumeExtractedData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)prepareForExtractionToPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (void)terminateStreamWithError:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithSeed:(id)a0;
- (void)extractionCompleteAtArchivePath:(id)a0;
- (void)extractionEnteredPassThroughMode;
- (id)extractionPath;
- (void)prepareForExtraction:(id /* block */)a0;
- (void)setExtractionProgress:(double)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (void)addBytesTransferred:(unsigned long long)a0;
- (unsigned long long)archiveBytesConsumed;
- (char)consumeExtractedDataIfNeeded;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 streamingZipOptions:(id)a2 archiveSize:(unsigned long long)a3 diskSpaceNeeded:(unsigned long long)a4;
- (Class)seedClass;
- (void)setArchiveBytesConsumed:(unsigned long long)a0;

@end
