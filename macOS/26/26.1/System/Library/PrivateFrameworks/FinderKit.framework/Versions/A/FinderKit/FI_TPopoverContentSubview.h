@class NSView, NSBox;

@interface FI_TPopoverContentSubview : FI_TUpdateLayerView {
    NSView *_view;
    NSBox *_separator;
}

- (id)view;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)addSeparator;
- (void)removeSeparator;

@end
