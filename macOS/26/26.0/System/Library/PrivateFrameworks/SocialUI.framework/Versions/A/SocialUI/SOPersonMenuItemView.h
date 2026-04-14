@class NSString, NSImageView, NSTextField;

@interface SOPersonMenuItemView : NSView

@property (retain) NSImageView *checkmarkImageView;
@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *labelTextField;
@property (retain) NSImageView *iconImageView;
@property (copy) NSString *title;
@property (copy) NSString *label;

- (void)updateLayer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;

@end
