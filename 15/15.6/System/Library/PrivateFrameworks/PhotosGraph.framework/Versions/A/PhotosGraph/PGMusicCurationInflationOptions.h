@interface PGMusicCurationInflationOptions : NSObject

@property (readonly, nonatomic) char shouldForceMetadataRefetch;
@property (nonatomic) long long inflationActionSource;

+ (id)stringFromInflationActionSource:(long long)a0;

- (id)initWithInflationActionSource:(long long)a0;
- (id)initWithRequestOptionsDictionary:(id)a0 inflationActionSource:(long long)a1;

@end
