@class NSString, QCSCN_LoadingProgressIndicatorLayer, CAKeyframeAnimation, CATextLayer;

@interface QCSCN_LoadingLayer : CALayer {
    CATextLayer *_textLayer;
    CAKeyframeAnimation *_rotation;
    QCSCN_LoadingProgressIndicatorLayer *_progressIndicatorLayer;
    BOOL _showText;
}

@property (copy) NSString *loadingString;
@property BOOL whiteProgressIndicator;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (void)didHide;
- (void)willShow;

@end
