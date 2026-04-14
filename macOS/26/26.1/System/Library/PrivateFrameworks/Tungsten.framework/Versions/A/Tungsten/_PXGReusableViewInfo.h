@class CALayer, NSMutableArray;
@protocol PXGInternalReusableView;

@interface _PXGReusableViewInfo : NSObject {
    NSMutableArray *_hostedViewInfos;
    double _rotation;
    double _scale;
    CALayer *_layer;
    id<PXGInternalReusableView> _view;
    _PXGReusableViewInfo *_hostingViewInfo;
    struct CGPoint { double x; double y; } _anchorPoint;
}

- (id)description;
- (void).cxx_destruct;

@end
