@class NSObject;
@protocol PRSPreviewControllerDelegate, PRSAssistantPreviewControllerPunchoutDelegate;

@interface PRSPreviewController : NSViewController

@property (weak) NSObject<PRSPreviewControllerDelegate> *delegate;
@property (weak) NSObject<PRSAssistantPreviewControllerPunchoutDelegate> *punchoutDelegate;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)mouseUp:(id)a0;
- (id)urlToOpen;
- (void)preheat:(id)a0 row:(int)a1 generation:(int)a2;
- (void)clearPreheatCache:(int)a0;

@end
