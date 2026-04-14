@interface PGMusicCurationInflationOptions : NSObject

@property (readonly, nonatomic) BOOL shouldForceMetadataRefetch;
@property (nonatomic) long long inflationActionSource;

+ (id)stringFromInflationActionSource:(long long)a0;

- (id)initWithRequestOptionsDictionary:(id)a0 inflationActionSource:(long long)a1;
- (id)initWithInflationActionSource:(long long)a0;

@end
