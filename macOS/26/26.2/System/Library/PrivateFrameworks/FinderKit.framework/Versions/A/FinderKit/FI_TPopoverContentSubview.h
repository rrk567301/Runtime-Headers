@class NSView, NSBox;

@interface FI_TPopoverContentSubview : FI_TUpdateLayerView {
    NSView *_view;
    NSBox *_separator;
}

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)addSeparator;
- (void)removeSeparator;

@end
