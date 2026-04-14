@class NSMutableDictionary;

@interface NSLanguageContext : NSMutableDictionary {
    NSMutableDictionary *_dict;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultLanguageContext;
+ (id)systemLanguageContext;
+ (id)languageContextWithName:(id)a0;
+ (id)availableLanguageContextNames;

@end
