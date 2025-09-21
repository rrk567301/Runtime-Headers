@class NSString, TRIAsset;

@interface TRIFile : TRIPBMessage

@property (retain, nonatomic) TRIAsset *asset;
@property (nonatomic) char hasAsset;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) char hasPath;
@property (nonatomic) char isOnDemand;
@property (nonatomic) char hasIsOnDemand;

+ (id)descriptor;

- (char)requiresDownload;

@end
