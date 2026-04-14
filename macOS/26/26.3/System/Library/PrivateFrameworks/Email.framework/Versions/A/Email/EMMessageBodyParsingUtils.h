@class ECPriceFormattingThresholds;

@interface EMMessageBodyParsingUtils : NSObject

@property (class, readonly) ECPriceFormattingThresholds *priceFormattingThresholds;

+ (unsigned long long)nodeDepthThreshold;
+ (id)snippetFromHTMLBody:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2 preservingQuotedForwardedContent:(BOOL)a3;
+ (unsigned long long)bodyElementChildThreshold;

@end
