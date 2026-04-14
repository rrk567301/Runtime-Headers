@class NSFont;

@interface CUIKSemiConstantCache : NSObject {
    double _dayOccurrenceMinimumCachedLineHeightCompact;
    double _dayOccurrenceMinimumCachedLineHeightRegular;
    double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    NSFont *_dayOccurrenceUncompressedSecondaryTextFont;
}

@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) NSFont *dayOccurrenceUncompressedSecondaryTextFont;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateMetrics;
- (void)_contentCategorySizeChanged:(id)a0;
- (id)_dayOccurrenceFontWithStyle:(id)a0 size:(double)a1 regularSize:(double)a2;
- (id)birthdayImageForFont:(id)a0;
- (id)commentIconStringForFont:(id)a0;
- (id)symbolImage:(id)a0 forFont:(id)a1;

@end
