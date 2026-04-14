@class NSImage, NSImageCell;

@interface AKTooManyAttemptsController : NSViewController

@property (retain) NSImageCell *imageView;
@property (retain) NSImage *displayImage;
@property (copy) id /* block */ cancelAction;
@property (copy) id /* block */ forgotAction;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)forgotButtonPressed:(id)a0;

@end
