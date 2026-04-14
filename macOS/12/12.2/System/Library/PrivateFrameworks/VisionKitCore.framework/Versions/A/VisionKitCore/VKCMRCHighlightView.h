@class VKCMRCDataDetectorElement;
@protocol VKCMRCHighlightViewDelegate;

@interface VKCMRCHighlightView : VKPlatformView

@property (retain, nonatomic) VKCMRCDataDetectorElement *element;
@property (weak, nonatomic) id<VKCMRCHighlightViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithElement:(id)a0 delegate:(id)a1;

@end
