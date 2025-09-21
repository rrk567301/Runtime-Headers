@interface ATXFileUtil : NSObject

+ (char)_shouldUpdateCache:(id)a0 withRefreshRate:(double)a1 currentTime:(double)a2;
+ (double)cacheAgeForCache:(id)a0 withCurrentTime:(double)a1;
+ (double)cacheAgeForConsumerType:(unsigned char)a0;
+ (double)cacheAgeForConsumerType:(unsigned char)a0 basePath:(id)a1;
+ (char)cachesAreValidForBasePath:(id)a0 consumerSubTypes:(id)a1;
+ (char)cachesAreValidForConsumerSubTypes:(id)a0;
+ (char)shouldUpdateCache:(id)a0 withRefreshRate:(double)a1;

@end
