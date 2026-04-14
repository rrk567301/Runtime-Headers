@interface WBSSavedAccountAppURL : NSObject

+ (BOOL)isAppURLString:(id)a0;
+ (id)_valueForAppURL:(id)a0 key:(id)a1;
+ (id)appIDFromAppURL:(id)a0;
+ (id)appKeyForSavedAccountsDictionaryFromURLString:(id)a0;
+ (id)appKeyForSavedAccountsDictionaryWithAppID:(id)a0;
+ (id)appNameFromAppURL:(id)a0;
+ (id)appURLForAppID:(id)a0 name:(id)a1;
+ (id)appURLForURLString:(id)a0;

@end
