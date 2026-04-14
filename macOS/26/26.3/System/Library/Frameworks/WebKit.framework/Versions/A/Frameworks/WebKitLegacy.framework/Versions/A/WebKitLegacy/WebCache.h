@interface WebCache : NSObject

+ (void)empty;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (void)initialize;
+ (id)statistics;
+ (void)clearCachedCredentials;

@end
