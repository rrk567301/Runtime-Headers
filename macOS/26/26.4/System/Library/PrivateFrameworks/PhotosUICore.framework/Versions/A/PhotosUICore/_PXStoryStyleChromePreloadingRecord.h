@protocol PXStoryViewLayoutSpec, PXStoryStyleDescriptor;

@interface _PXStoryStyleChromePreloadingRecord : NSObject

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) id<PXStoryStyleDescriptor> styleInfo;
@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDisplayScale:(double)a0 styleInfo:(id)a1 viewLayoutSpec:(id)a2;

@end
