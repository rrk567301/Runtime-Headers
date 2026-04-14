@class NSObject;
@protocol SPPreviewControllerDelegate;

@interface SPPreviewController : NSViewController

@property (weak) NSObject<SPPreviewControllerDelegate> *delegate;
@property (weak) NSObject *punchoutDelegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)awakeFromNib;
- (id)urlToOpen;
- (void)clearPreheatCache:(int)a0;
- (void)preheat:(id)a0 row:(int)a1 generation:(int)a2;

@end
