@class NSView, NSBox;

@interface FI_TPopoverContentSubview : FI_TUpdateLayerView {
    struct TNSRef<NSView, void> { NSView *fRef; } _view;
    struct TNSRef<NSBox, void> { NSBox *fRef; } _separator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)view;
- (id)initWithView:(id)a0;
- (void)addSeparator;
- (void)removeSeparator;

@end
