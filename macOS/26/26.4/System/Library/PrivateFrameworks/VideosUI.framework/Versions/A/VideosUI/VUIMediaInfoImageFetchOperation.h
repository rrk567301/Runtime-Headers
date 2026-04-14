@class VUIImage, NSError, NSMutableArray, VUIMediaInfo;

@interface VUIMediaInfoImageFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL loadQuoteImage;
@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (retain, nonatomic) VUIImage *image;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL imageLoadFinished;
@property (nonatomic) BOOL addedToQueue;

- (void)addCompletion:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)fetchImageWithCompletion:(id /* block */)a0;
- (id)imageProxy;
- (BOOL)shouldUsePrepareImageForDisplay;
- (id)initWithMediaInfoForQuoteImage:(id)a0;
- (id)initWithMediaInfo:(id)a0;

@end
