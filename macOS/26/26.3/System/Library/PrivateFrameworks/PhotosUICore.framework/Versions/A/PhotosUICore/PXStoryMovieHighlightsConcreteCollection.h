@class NSString, NSMutableDictionary;

@interface PXStoryMovieHighlightsConcreteCollection : NSObject <PXStoryMovieHighlightsCollection, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_highlightsByAssetId;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)movieHighlightsForDisplayAsset:(id)a0;

@end
