@class NSSet, NSDictionary, NSArray, NSMutableArray;

@interface TSWPFontList : NSObject

@property (retain) NSDictionary *knownFonts;
@property (retain) NSSet *downloadedFonts;
@property (retain) NSDictionary *knownFontFamilyFaces;
@property (retain) NSArray *recentFontNames;
@property (retain) NSMutableArray *cachedAvailableFamilyFonts;
@property (readonly) NSArray *recentBaseFonts;
@property (copy, nonatomic) id /* block */ fontPropertyResolver;

+ (id)sharedInstance;
+ (id)excludedFamilyNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)availableFontFamilies;
- (id)sortedFontFamilies;
- (id)fontForPostscriptName:(id)a0 atSize:(double)a1;
- (id)fontForPostscriptName:(id)a0;
- (id)postScriptNameForFamilyName:(id)a0;
- (id)baseFontWithDescriptor:(id)a0;
- (void)loadRecentFonts;
- (id)familiesForFontsInCollection:(struct __CTFontCollection { } *)a0;
- (void)registerDownloadedFontPostScriptNames:(id)a0;
- (void)dropFontsWithPSNamesInSet:(id)a0;
- (id)normalizeChangedFontUrlsToStrings:(id)a0 forKey:(id)a1;
- (id)cachedFacesOfFontFamily:(id)a0;
- (void)cacheFaces:(id)a0 forFontFamily:(id)a1;
- (id)cacheKeyForFontWithPostScriptName:(id)a0 atSize:(double)a1 bold:(BOOL)a2 italic:(BOOL)a3;
- (id)fontForKey:(id)a0;
- (void)cacheFont:(id)a0 withKey:(id)a1;
- (id)fontsForAvailableFamilies;
- (id)fontFromStyle:(id)a0;
- (id)availableFontDescriptorsForAllFamilies;
- (id)cacheKeyForFontDescriptor:(id)a0;
- (void)saveRecentFontNames:(id)a0;
- (id)familyNameFromFontDescriptor:(struct __CTFontDescriptor { } *)a0;
- (id)romanOnlyFonts;
- (void)downloadableFontsChanged:(id)a0;
- (void)fontsChanged:(id)a0;
- (id)fontFacesForFontFamily:(id)a0;
- (id)fontForPostscriptName:(id)a0 atSize:(double)a1 bold:(BOOL)a2 italic:(BOOL)a3;
- (void)cacheFont:(id)a0 forPostScriptName:(id)a1 atSize:(double)a2 bold:(BOOL)a3 italic:(BOOL)a4;
- (id)sortedFontsInStylesheet:(id)a0;
- (id)fontForStyles:(id)a0;
- (void)registerRecentFont:(id)a0;

@end
