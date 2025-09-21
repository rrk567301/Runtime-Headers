@class PXSearchQueryMatchInfo, NSString, NSArray;
@protocol PXDisplayAsset;

@interface PUAssetHighlightTimeRangesProducer : NSObject {
    void /* function */ searchContextualVideoThumbnailIdentifier;
    void /* function */ highlightTimeRanges;
    void /* unknown type, empty encoding */ mediaAnalyzer;
    void /* unknown type, empty encoding */ analysisProgress;
}

@property (nonatomic, retain) id<PXDisplayAsset> asset;
@property (nonatomic, retain) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (nonatomic, copy) NSString *searchContextualVideoThumbnailIdentifier;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, copy) NSArray *highlightTimeRanges;

- (void)dealloc;
- (id)initWithMediaAnalyzer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
