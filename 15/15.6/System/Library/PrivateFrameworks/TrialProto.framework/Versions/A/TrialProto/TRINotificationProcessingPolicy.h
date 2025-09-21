@interface TRINotificationProcessingPolicy : TRIPBMessage

@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) char hasDelaySeconds;
@property (nonatomic) int assetDownloadPolicy;
@property (nonatomic) char hasAssetDownloadPolicy;

+ (id)descriptor;

@end
