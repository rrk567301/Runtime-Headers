@interface PGAOINameShortener : NSObject

+ (BOOL)isCountryWithAOISubstitutions:(id)a0;
+ (id)_shortenedAOIForName:(id)a0;
+ (id)s_aoiReplacementsDictionary;
+ (void)_enumerateWordCombinationsForName:(id)a0 usingBlock:(id /* block */)a1;
+ (id)shortenedAOIForAOINode:(id)a0;

@end
