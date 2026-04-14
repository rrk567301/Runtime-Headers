@interface CNVCardParameterEncoder : NSObject

+ (id)encodeParameterValue:(id)a0;
+ (id)substitutions;
+ (id)stringByReplacingEncodableCharactersInString:(id)a0;
+ (id)stringByEnclosingInQuotesIfNecessary:(id)a0;
+ (BOOL)mustEncloseStringInQuotes:(id)a0;

@end
