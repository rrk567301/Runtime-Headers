@interface WebCache : NSObject

+ (void)empty;
+ (void)initialize;
+ (BOOL)isDisabled;
+ (id)statistics;
+ (void)setDisabled:(BOOL)a0;
+ (void)clearCachedCredentials;

@end
