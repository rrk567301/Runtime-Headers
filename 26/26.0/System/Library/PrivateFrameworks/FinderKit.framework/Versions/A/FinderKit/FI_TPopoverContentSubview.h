@class NSView, NSBox;

@interface FI_TPopoverContentSubview : FI_TUpdateLayerView {
    NSView *_view;
    NSBox *_separator;
}

- (id)initWithView:(id)a0;
- (id)view;
- (void).cxx_destruct;
- (void)addSeparator;
- (void)removeSeparator;

@end
