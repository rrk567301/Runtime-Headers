@interface WebCache : NSObject

+ (void)setDisabled:(BOOL)a0;
+ (id)statistics;
+ (void)initialize;
+ (BOOL)isDisabled;
+ (void)empty;
+ (void)clearCachedCredentials;

@end
