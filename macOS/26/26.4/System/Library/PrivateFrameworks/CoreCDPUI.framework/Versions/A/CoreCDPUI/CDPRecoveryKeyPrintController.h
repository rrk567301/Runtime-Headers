@class CDPPrintBorderView, NSString, NSTextField;

@interface CDPRecoveryKeyPrintController : NSViewController

@property (retain) NSTextField *cdpKeyPrintTextField;
@property (retain) CDPPrintBorderView *cdpRecoveryKeyBorderView;
@property (retain) NSTextField *footerLabel;
@property (copy, nonatomic) NSString *cdpKeyPrintText;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;

@end
