@class NSLayoutConstraint, NSString, NSTextField;

@interface LUISimpleViewController : LUIPopoverViewController

@property (retain) NSTextField *messageTextField;
@property (retain) NSTextField *informationTextField;
@property (retain) NSLayoutConstraint *constraint;
@property (copy) NSString *message;
@property (copy) NSString *information;

- (void)prepareForDisplay;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_layoutContentView;
- (void)awakeFromNib;

@end
