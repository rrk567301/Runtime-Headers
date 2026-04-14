@class NSColor;

@interface _NSScrubberRoundedBackgroundSelectionStyle : NSScrubberSelectionStyle

@property (copy) NSColor *tintColor;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)makeSelectionView;

@end
