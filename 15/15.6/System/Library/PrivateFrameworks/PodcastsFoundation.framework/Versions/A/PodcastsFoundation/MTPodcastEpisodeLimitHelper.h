@class NSSet;

@interface MTPodcastEpisodeLimitHelper : NSObject

@property (class, nonatomic, readonly) NSSet *allGlobalLimits;

+ (char)limitAllowsAutomaticDownloads:(long long)a0;

- (id)init;

@end
