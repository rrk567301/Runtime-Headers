@protocol PXGHostingLayerVisibilityInfoDelegate;

@interface PXGHostingLayerVisibilityInfo : NSObject

@property (weak, nonatomic) id<PXGHostingLayerVisibilityInfoDelegate> delegate;
@property (nonatomic) char isVisible;

- (id)init;
- (void).cxx_destruct;

@end
