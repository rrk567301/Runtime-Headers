@class NSString, MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudController *sharedCloudController;
@property (class, readonly, nonatomic) NSString *canShowCloudDownloadButtonsDidChangeNotificationName;

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)cloudAddToPlaylistBehavior;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingCloudController:(id)a0;

@end
