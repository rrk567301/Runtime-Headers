@interface WebCache : NSObject

+ (void)empty;
+ (BOOL)isDisabled;
+ (void)setDisabled:(BOOL)a0;
+ (id)statistics;
+ (void)initialize;
+ (void)clearCachedCredentials;

@end
