@interface TPInflatableFootnoteContainerLayout : TPFootnoteContainerLayout {
    char _inflated;
}

- (void)validate;
- (id)computeLayoutGeometry;
- (void)setNeedsInflation;

@end
