@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell {
    NSDictionary *_item;
    OSADefinition *_definition;
}

- (void)setItem:(id)a0;
- (id)item;
- (id)definition;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDefinition:(id)a0;

@end
