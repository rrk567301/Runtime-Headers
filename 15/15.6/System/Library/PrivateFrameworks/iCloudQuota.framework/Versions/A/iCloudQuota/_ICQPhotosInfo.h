@interface _ICQPhotosInfo : NSObject

@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;

+ (id)_photosShutdownQueue;
+ (void)_shutDownPhotoLibrary;
+ (void)getInfoWithCompletion:(id /* block */)a0;
+ (char)hasPhotoBulkCreation;
+ (char)isPhotosSyncOverQuota;
+ (id)mockCount:(id)a0;

@end
