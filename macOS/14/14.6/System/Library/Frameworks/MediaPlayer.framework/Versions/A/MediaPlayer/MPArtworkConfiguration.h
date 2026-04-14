@interface MPArtworkConfiguration : NSObject

+ (id)systemConfiguration;

- (id)initWithConfigurationDictionaries:(id)a0;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)a0 artworkType:(long long)a1;
- (id)supportedSizesForMediaType:(unsigned long long)a0 artworkType:(long long)a1;

@end
