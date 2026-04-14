@interface SGAsset : NSObject

+ (id)asset;
+ (id)notificationQueue;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)localeAssetIdentifier;
+ (id)localeAsset;

@end
