@interface CLSPublicEventCachingOptions : NSObject

@property (class, readonly, nonatomic) unsigned long long noFetchLimit;

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) long long jobContext;

- (id)init;

@end
