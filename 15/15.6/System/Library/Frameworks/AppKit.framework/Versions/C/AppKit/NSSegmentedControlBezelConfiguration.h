@class NSUserInterfaceCompressionOptions, NSAppearance, NSFont, NSColor;

@interface NSSegmentedControlBezelConfiguration : NSObject <NSCopying>

@property (retain) NSAppearance *appearance;
@property (retain) NSColor *selectedSegmentBezelColor;
@property (retain) NSUserInterfaceCompressionOptions *compressibleOptions;
@property (retain) NSFont *font;
@property long long segmentStyle;
@property long long segmentDistribution;
@property long long layoutDirection;
@property unsigned long long controlSize;
@property long long presentationState;
@property long long highlightedSegment;
@property char drawsBezel;
@property char isEnabled;
@property char isHighlighted;
@property char inToolbar;
@property char inTouchBar;
@property char useSlidingStyle;
@property char useTextStyle;
@property char hasAnyRollover;
@property char allowsRollover;
@property char wantsGroupRollover;
@property char animateChanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
