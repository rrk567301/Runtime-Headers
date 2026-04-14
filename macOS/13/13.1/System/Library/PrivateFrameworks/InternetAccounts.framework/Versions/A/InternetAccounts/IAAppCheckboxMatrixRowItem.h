@class NSImageView, NSTextField, NSView, NSString, NSImage, NSButton, IAApplication;

@interface IAAppCheckboxMatrixRowItem : NSObject

@property (retain, nonatomic) NSView *view;
@property (retain) NSImageView *imageView;
@property (retain) NSTextField *textField;
@property (retain) NSButton *checkbox;
@property (copy) NSString *title;
@property (copy) NSImage *image;
@property (retain) IAApplication *app;
@property (retain) id delegate;

+ (id)itemWithTitle:(id)a0 image:(id)a1;

- (void).cxx_destruct;
- (long long)state;
- (void)setEnabled:(BOOL)a0;
- (void)setState:(long long)a0;
- (id)initWithTitle:(id)a0 image:(id)a1;
- (void)syncUI;
- (void)checkbox:(id)a0;

@end
