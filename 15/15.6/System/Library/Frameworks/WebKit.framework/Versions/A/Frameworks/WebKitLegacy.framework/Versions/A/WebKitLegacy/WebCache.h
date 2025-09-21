@interface WebCache : NSObject

+ (void)initialize;
+ (id)statistics;
+ (void)setDisabled:(char)a0;
+ (char)isDisabled;
+ (void)empty;
+ (void)clearCachedCredentials;

@end
