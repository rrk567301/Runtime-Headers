@interface SGAsset : NSObject

+ (id)notificationQueue;
+ (id)asset;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)localeAsset;
+ (id)localeAssetIdentifier;

@end
