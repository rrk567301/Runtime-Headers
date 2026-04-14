@class NSArray, VSTProxyRendererVisibleSplats;

@interface VSTProxyRendererProxyData : NSObject

@property (retain, nonatomic) NSArray *stackViews;
@property (retain, nonatomic) VSTProxyRendererVisibleSplats *visibleSplats;

- (void).cxx_destruct;

@end
