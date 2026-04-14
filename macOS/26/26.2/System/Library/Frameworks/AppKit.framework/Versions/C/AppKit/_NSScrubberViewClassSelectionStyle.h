@interface _NSScrubberViewClassSelectionStyle : NSScrubberSelectionStyle {
    Class _viewClass;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithViewClass:(Class)a0;
- (id)makeSelectionView;

@end
