@class NSColor;

@interface _NSScrubberRoundedBackgroundSelectionStyle : NSScrubberSelectionStyle

@property (copy) NSColor *tintColor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)makeSelectionView;

@end
