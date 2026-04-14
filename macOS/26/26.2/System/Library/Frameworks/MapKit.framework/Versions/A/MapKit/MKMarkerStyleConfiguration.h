@class NSColor, GEOFeatureStyleAttributes;

@interface MKMarkerStyleConfiguration : NSObject

@property (retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSColor *fillColor;
@property (retain, nonatomic) NSColor *glyphColor;
@property (nonatomic) BOOL glyphHidden;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL increasedContrast;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL elevated;
@property (nonatomic) double scale;

+ (BOOL)_darkModeForView:(id)a0;
+ (double)_fallbackScale;
+ (BOOL)_increaseContrastForView:(id)a0;
+ (double)_scaleForView:(id)a0;
+ (id)configurationForView:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToMarkerStyleConfiguration:(id)a0;

@end
