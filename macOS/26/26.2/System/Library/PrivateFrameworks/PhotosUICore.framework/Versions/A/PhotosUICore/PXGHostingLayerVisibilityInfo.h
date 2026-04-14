@protocol PXGHostingLayerVisibilityInfoDelegate;

@interface PXGHostingLayerVisibilityInfo : NSObject

@property (weak, nonatomic) id<PXGHostingLayerVisibilityInfoDelegate> delegate;
@property (nonatomic) BOOL isVisible;

- (void).cxx_destruct;
- (id)init;

@end
