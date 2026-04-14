@class MiroBlueprint, NSArray, NSDictionary, NSMutableArray, NSColor;
@protocol MiroTitleColorConfiguration;

@interface MiroColorSelectionController : NSObject

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryColor;
@property (retain, nonatomic) NSColor *secondaryColor;
@property (retain, nonatomic) NSColor *gapColor;
@property (retain, nonatomic) NSArray *randomNumbers;
@property (readonly, nonatomic) NSDictionary *colorTitlePresets;
@property (readonly, nonatomic) NSArray *presetBackgroundColors;
@property (readonly, nonatomic) NSArray *presetTextOnBlackColors;
@property (readonly, nonatomic) NSArray *presetTextOnWhiteColors;
@property (readonly, nonatomic) NSArray *presetTextOverImageColors;
@property (readonly, nonatomic) NSArray *safeColorRanges;
@property (retain, nonatomic) NSDictionary *colorAnalysis;
@property (nonatomic) unsigned long long analysisRegion;
@property (retain, nonatomic) NSArray *accentColors;
@property (retain, nonatomic) NSArray *safeAccentColors;
@property (retain, nonatomic) NSArray *imageDominantColors;
@property (retain, nonatomic) NSArray *centerDominantColors;
@property (retain, nonatomic) NSArray *lowerThirdDominantColors;
@property (nonatomic) BOOL hasWarnedOnceNilTitleID;
@property (retain, nonatomic) id<MiroTitleColorConfiguration> debugTitleConfiguration;
@property (retain, nonatomic) NSMutableArray *debugSafeAccentRanges;
@property (retain, nonatomic) NSMutableArray *debugFilteredImageDominantRanges;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) int titleSnapshotAspect;

+ (void)fetchColorAnalysisForAsset:(id)a0 atTime:(int)a1 completion:(id /* block */)a2;
+ (void)_fetchColorAnalysisDictionaryForAsset:(id)a0 startTime:(int)a1 completion:(id /* block */)a2;
+ (id)_colorAnalysisForStartTime:(int)a0 asset:(id)a1;
+ (BOOL)colorIsDark:(id)a0;
+ (BOOL)colorIsLight:(id)a0;
+ (BOOL)colorIsSaturated:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithColorAnalysis:(id)a0;
- (void)_generateRandomNumbersForRandomizerSeed:(unsigned int *)a0;
- (void)_invalidateColors;
- (void)_setupColorsIfNecessary;
- (id)_randomPresetBackgroundColor;
- (id)_dominantColorsForAnalysisRegion:(unsigned long long)a0;
- (id)_analysisColorsForKey:(id)a0;
- (id)_filterDominantColorsForAnalysisRegion:(unsigned long long)a0;
- (id)_presetColorsForKey:(id)a0;
- (id)_selectSafeDominantColorForAnalysisRegion:(unsigned long long)a0;
- (id)_selectSafeAccentColor;
- (id)_randomPresetColorOverWhiteColor;
- (id)_randomPresetColorOverBlackColor;
- (id)_selectSafeTextColorOverImageForAnalysisRegion:(unsigned long long)a0;
- (id)_presetHSVValuesForKey:(id)a0;
- (id)_colorsWithSimilarHue:(double)a0 fromPresets:(id)a1 usingHSVValues:(id)a2;
- (id)_filterSafeBackgroundColorsForColors:(id)a0 withDebugArray:(id)a1;
- (id)_presetBackgroundColorWithSimilarHueForColor:(id)a0;
- (id)_analysisHSVValuesForAnalysisRegion:(unsigned long long)a0;
- (id)_presetTextOverImageColorWithSimilarHue:(double)a0;
- (id)debugBackgroundColor;
- (id)debugPrimaryColor;
- (id)debugSecondaryColor;
- (id)debugAccentColors;
- (id)debugImageDominantColors;
- (id)debugCenterDominantColors;
- (id)debugLowerThirdDominantColors;
- (id)debugFilteredImageDominantColors;

@end
