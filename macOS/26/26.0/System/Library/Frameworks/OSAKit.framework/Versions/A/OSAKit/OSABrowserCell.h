@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell {
    NSDictionary *_item;
    OSADefinition *_definition;
}

- (id)item;
- (id)definition;
- (void)dealloc;
- (void)setItem:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDefinition:(id)a0;

@end
