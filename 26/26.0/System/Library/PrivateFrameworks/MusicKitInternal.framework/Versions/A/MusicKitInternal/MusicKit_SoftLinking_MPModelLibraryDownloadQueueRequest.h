@class NSString, MPModelLibraryDownloadQueueRequest, MPModelLibraryDownloadQueueResponse;

@interface MusicKit_SoftLinking_MPModelLibraryDownloadQueueRequest : NSObject {
    MPModelLibraryDownloadQueueRequest *_underlyingDownloadQueueRequest;
    MPModelLibraryDownloadQueueResponse *_underlyingUpdatedResponse;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSString *downloadQueueDidChangeNotificationName;

+ (void)requestDownloadingSongsCountWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)_applyUnderlyingResponse:(id)a0;
- (void)_handleDownloadQueueDidChangeNotification:(id)a0;

@end
