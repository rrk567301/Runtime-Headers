@class NSImageView, AMSUICommonLabel, NSView, NSImage, NSString;

@interface AMSUICommonBarButtonItem : AMSUICommonView

@property (readonly) NSImageView *imageView;
@property (readonly) AMSUICommonLabel *label;
@property SEL action;
@property (copy) id /* block */ actionBlock;
@property (readonly) NSView *customView;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSImage *image;
@property (readonly) unsigned long long style;
@property (weak) id target;
@property (readonly) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (id)initWithTitle:(id)a0 style:(unsigned long long)a1 target:(id)a2 action:(SEL)a3;
- (void)layoutSubviews;
- (id)initWithTitle:(id)a0 image:(id)a1 style:(unsigned long long)a2 target:(id)a3 action:(SEL)a4;
- (id)initWithTitle:(id)a0 image:(id)a1 style:(unsigned long long)a2 target:(id)a3 action:(SEL)a4 actionBlock:(id /* block */)a5;
- (id)initWithCustomView:(id)a0;
- (id)initWithImage:(id)a0 style:(unsigned long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithTitle:(id)a0 image:(id)a1 style:(unsigned long long)a2 actionBlock:(id /* block */)a3;

@end
