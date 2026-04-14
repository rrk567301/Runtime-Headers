@class NSImageView;

@interface AXVRemoteWindow : AXVWindow

@property (retain, nonatomic) NSImageView *imageView;

- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)shouldCaptureWindowForScreenSharing;

@end
