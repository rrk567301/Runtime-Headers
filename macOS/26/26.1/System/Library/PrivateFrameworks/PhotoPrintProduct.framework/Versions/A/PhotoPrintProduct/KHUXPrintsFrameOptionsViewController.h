@class NSSlider, KHFrame;

@interface KHUXPrintsFrameOptionsViewController : UXViewController {
    NSSlider *_zoomSlider;
}

@property (readonly, nonatomic) NSSlider *zoomSlider;
@property (readonly, nonatomic) KHFrame *frameObject;

- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrameObject:(id)a0;
- (void)zoomChanged:(id)a0;

@end
