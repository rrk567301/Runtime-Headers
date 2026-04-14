@class IKImageLayer, CALayer, IKNavigationImageLayer;

@interface IKNavigationRectLayer : CALayer {
    IKImageLayer *_imageLayer;
    CALayer *_navLayer;
    CALayer *_rootLayer;
    IKNavigationImageLayer *_navImageLayer;
}

- (void)setup:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)adjustSize;

@end
