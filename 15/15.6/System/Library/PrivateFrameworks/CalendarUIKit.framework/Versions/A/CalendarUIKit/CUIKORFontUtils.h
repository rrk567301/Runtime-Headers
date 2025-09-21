@class NSFont;

@interface CUIKORFontUtils : NSObject

@property (class, readonly, nonatomic) NSFont *defaultOccurrenceSecondaryTextFont;

+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(char)a0 sizeClass:(long long)a1;
+ (id)_primaryTextFontCache;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(char)a0 sizeClass:(long long)a1;
+ (id)defaultOccurrencePrimaryTextFontForSizeClass:(long long)a0;
+ (id)defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)a0;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(char)a0 sizeClass:(long long)a1;

@end
