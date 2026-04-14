@class NSColor;

@interface _NSScrubberRoundedBackgroundSelectionStyle : NSScrubberSelectionStyle

@property (copy) NSColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)makeSelectionView;

@end
