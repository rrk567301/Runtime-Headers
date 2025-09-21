@class NSImageView;

@interface AXVRemoteWindow : AXVWindow

@property (retain, nonatomic) NSImageView *imageView;

- (void)updateWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)shouldCaptureWindowForScreenSharing;

@end
