@interface WebCache : NSObject

+ (void)initialize;
+ (id)statistics;
+ (void)empty;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (void)clearCachedCredentials;

@end
