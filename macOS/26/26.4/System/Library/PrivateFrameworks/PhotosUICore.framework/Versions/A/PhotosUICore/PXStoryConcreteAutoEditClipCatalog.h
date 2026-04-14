@class NSMutableDictionary, NSMutableArray;

@interface PXStoryConcreteAutoEditClipCatalog : NSObject <PXStoryAutoEditClipCatalog, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_clipIndicesByAssetUUID;
    NSMutableArray *_orderedClips;
}

@property (readonly, nonatomic) long long numberOfClips;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)clipAtIndex:(long long)a0;
- (id)clipForDisplayAsset:(id)a0;
- (void)enumerateClipsUsingBlock:(id /* block */)a0;
- (long long)indexOfClipForDisplayAsset:(id)a0;

@end
