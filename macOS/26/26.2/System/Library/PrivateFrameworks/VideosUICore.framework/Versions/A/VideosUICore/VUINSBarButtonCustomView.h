@class VUINSBarButtonConfiguration;

@interface VUINSBarButtonCustomView : NSView

@property (retain, nonatomic) VUINSBarButtonConfiguration *configuration;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void).cxx_destruct;
- (id)initWithCustomView:(id)a0;

@end
