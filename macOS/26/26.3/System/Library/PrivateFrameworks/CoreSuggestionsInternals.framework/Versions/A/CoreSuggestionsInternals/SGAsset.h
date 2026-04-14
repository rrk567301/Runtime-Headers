@interface SGAsset : NSObject

+ (id)notificationQueue;
+ (id)asset;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)localeAssetIdentifier;
+ (id)localeAsset;

@end
