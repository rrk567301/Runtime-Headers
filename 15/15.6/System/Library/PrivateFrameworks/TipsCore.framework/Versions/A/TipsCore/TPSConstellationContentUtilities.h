@interface TPSConstellationContentUtilities : NSObject

+ (id)contentClasses;
+ (id)altTextRepresentationForContent:(id)a0;
+ (id)textContentWithText:(id)a0;
+ (char)contentContainsInlineIcon:(id)a0;
+ (char)contentContainsLink:(id)a0;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (id)hrefForLinkMark:(id)a0;
+ (long long)markTypeForMarkDictionary:(id)a0;
+ (id)textForContentNode:(id)a0;
+ (id)textRepresentationForContent:(id)a0;

@end
