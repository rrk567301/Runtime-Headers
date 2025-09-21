@class NSString;

@interface LUIBigClockFont : NSObject

@property (readonly) NSString *identifier;
@property (readonly) double weight;
@property (readonly) NSString *fontName;

+ (double)_defaultWeightForIdentifier:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_weightRangeForIdentifier:(id)a0;
+ (id)bigClockFontFromPrefs;
+ (id)bigClockFontWithIdentifier:(id)a0;
+ (id)bigClockFontWithIdentifier:(id)a0 weight:(double)a1;
+ (id)defaultBigClockFont;
+ (id)defaultBigClockFontIdentifier;
+ (BOOL)isValidBigClockFontIdentifier:(id)a0;
+ (double)normalizedWeightFromStandardizedWeight:(double)a0 forIdentifier:(id)a1;
+ (double)standardizedWeightFromNormalizedWeight:(double)a0 forIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)_adaptiveLocaleIdentifiers;
- (id)_fontNameForIdentifier:(id)a0;
- (BOOL)_useSFAdaptiveSoftNumeric;
- (id)initWithIdentifier:(id)a0 weight:(double)a1;

@end
