@class CDPPrintBorderView, NSString, NSTextField;

@interface CDPRecoveryKeyPrintController : NSViewController

@property (retain) NSTextField *cdpKeyPrintTextField;
@property (retain) CDPPrintBorderView *cdpRecoveryKeyBorderView;
@property (retain) NSTextField *footerLabel;
@property (copy, nonatomic) NSString *cdpKeyPrintText;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;

@end
