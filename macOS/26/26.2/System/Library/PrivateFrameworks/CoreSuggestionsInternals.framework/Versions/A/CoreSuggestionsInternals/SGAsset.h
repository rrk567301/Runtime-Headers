@interface SGAsset : NSObject

+ (id)localeAsset;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)localeAssetIdentifier;
+ (id)asset;
+ (id)notificationQueue;

@end
