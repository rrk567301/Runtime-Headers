@class KHAsset, KHTreatmentLayer;

@interface KHSegmentedPart : NSObject {
    KHAsset *_asset;
    KHTreatmentLayer *_treatmentLayer;
}

@property long long assetId;
@property int type;
@property float width;
@property float height;
@property char mirrorHorizontal;
@property char mirrorVertical;
@property float rotation;
@property struct CGSize { double width; double height; } scaledSize;

- (void)dealloc;
- (id)asset;
- (id)initWithType:(int)a0 treatmentLayer:(id)a1;

@end
