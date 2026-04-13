@class CALayer;

@interface QLOverlayLoadingButtonLayer : QLOverlayButtonLayer {
    CALayer *_loadingLayer;
}

@property BOOL loading;

@end
