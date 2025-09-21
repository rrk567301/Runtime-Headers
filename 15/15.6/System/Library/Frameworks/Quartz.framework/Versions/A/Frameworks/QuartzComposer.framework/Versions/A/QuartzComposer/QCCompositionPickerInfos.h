@class NSColor, NSArray, NSDictionary;

@interface QCCompositionPickerInfos : NSObject {
    NSArray *_compositions;
}

@property float maxAnimationFrameRate;
@property char showsCompositionNames;
@property char animateCompositions;
@property char allowsEmptySelection;
@property char allowsLayoutAnimations;
@property char allowsIdentitySelection;
@property struct CGSize { double width; double height; } compositionAspectRatio;
@property long long selectionMode;
@property long long selectedCompositionIndex;
@property unsigned long long borderType;
@property (retain) NSColor *backgroundColor;
@property (retain) NSColor *cellBackgroundColor;
@property char drawsBackground;
@property char showsAttributeFilter;
@property unsigned long long numberOfColumns;
@property unsigned long long numberOfRows;
@property char fillsPicker;
@property (retain) NSArray *compositions;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDictionary *options;
@property char flipCellsHorizontally;

- (void)dealloc;
- (id)initWithPickerOptions:(id)a0;
- (char)useHUDStyle;

@end
