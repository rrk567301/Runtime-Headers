@class PHAssetCollection, PNTimelineCrop;

@interface PNTimelineDataItem : NSObject

@property (retain, nonatomic) PNTimelineCrop *suggestedCrop;
@property (retain, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 suggestedCrop:(id)a1;

@end
