@class NSString, MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudController *sharedCloudController;
@property (class, readonly, nonatomic) NSString *canShowCloudDownloadButtonsDidChangeNotificationName;

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (long long)cloudAddToPlaylistBehavior;
- (id)_initWithUnderlyingCloudController:(id)a0;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)a0;

@end
