@class NSLayoutConstraint, NSString, NSTextField;

@interface LUISimpleViewController : LUIPopoverViewController

@property (retain) NSTextField *messageTextField;
@property (retain) NSTextField *informationTextField;
@property (retain) NSLayoutConstraint *constraint;
@property (copy) NSString *message;
@property (copy) NSString *information;

- (void).cxx_destruct;
- (void)prepareForDisplay;
- (void)_layoutContentView;
- (void)dealloc;
- (void)awakeFromNib;

@end
