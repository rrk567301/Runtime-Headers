@class VUIMediaInfoImageFetchOperation, VUIMediaInfo;

@interface VUIMediaInfoFetchItem : NSObject

@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (retain, nonatomic) VUIMediaInfoImageFetchOperation *imageOperation;
@property (retain, nonatomic) VUIMediaInfoImageFetchOperation *quoteImageOperation;

- (void).cxx_destruct;
- (id)initWithMediaInfo:(id)a0;
- (void)updateMediaInfo:(id)a0;

@end
