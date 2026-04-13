@interface KHLocalization : NSObject

+ (id)preferredLanguageCode;
+ (BOOL)preferredLanguageIsRTL;
+ (id)_createPreferredLanguageCode;

@end
