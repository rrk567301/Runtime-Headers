@interface TPDictionaryMatchingRule : NSObject

+ (id)andMatch:(id)a0;
+ (id)fieldExists:(id)a0;
+ (id)notMatch:(id)a0;
+ (id)trueMatch;
+ (id)orMatch:(id)a0;
+ (id)falseMatch;
+ (id)fieldMatch:(id)a0 fieldRegex:(id)a1;

@end
