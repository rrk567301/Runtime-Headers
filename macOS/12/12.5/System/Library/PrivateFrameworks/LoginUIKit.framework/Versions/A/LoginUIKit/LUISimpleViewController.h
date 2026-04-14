@class NSLayoutConstraint, NSString, NSTextField;

@interface LUISimpleViewController : LUIPopoverViewController

@property NSTextField *messageTextField;
@property NSTextField *informationTextField;
@property (retain) NSLayoutConstraint *constraint;
@property (copy) NSString *message;
@property (copy) NSString *information;

- (void)dealloc;
- (void)awakeFromNib;
- (void)prepareForDisplay;
- (void)_layoutContentView;

@end
