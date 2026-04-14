@interface WebCache : NSObject

+ (void)setDisabled:(BOOL)a0;
+ (void)initialize;
+ (id)statistics;
+ (void)empty;
+ (BOOL)isDisabled;
+ (void)clearCachedCredentials;

@end
