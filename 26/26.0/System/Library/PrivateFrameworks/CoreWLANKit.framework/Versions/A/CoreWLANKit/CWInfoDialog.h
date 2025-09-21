@class NSString, NSImageView, NSTextField;

@interface CWInfoDialog : NSWindowController {
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    NSImageView *_imageView;
}

@property (weak) id delegate;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *description;

- (void)windowDidLoad;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0;
- (void)awakeFromNib;
- (id)initWithTitle:(id)a0 description:(id)a1;
- (void)onOKButton:(id)a0;

@end
