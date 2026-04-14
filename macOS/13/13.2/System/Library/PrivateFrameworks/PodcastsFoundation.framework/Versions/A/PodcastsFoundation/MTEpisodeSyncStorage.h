@class NSString;

@interface MTEpisodeSyncStorage : NSObject <MTEpisodeSyncProcessorStorageProviding>

@property (retain, nonatomic) NSString *podcastsDomainVersion;

- (id)importContext;
- (id)versionForKey:(id)a0;
- (void)setVersion:(id)a0 forKey:(id)a1;
- (void)resetVersionForFeedUrl:(id)a0;
- (void)resetVersionForAllFeedUrls;
- (id)modernKeyFromFeedUrl:(id)a0;
- (id)feedUrlFromModernKey:(id)a0;

@end
