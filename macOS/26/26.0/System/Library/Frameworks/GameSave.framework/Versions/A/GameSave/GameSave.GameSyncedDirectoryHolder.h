@class NSURL, NSOperationQueue, NSError;

@interface GameSave.GameSyncedDirectoryHolder : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ allowReaders;
    void /* unknown type, empty encoding */ isAppInBackground;
    void /* unknown type, empty encoding */ securityScopedURL;
    void /* unknown type, empty encoding */ shouldStopAccessingSecurityScopedResource;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ gainedVersionCalled;
    void /* unknown type, empty encoding */ gainedVersionContinuation;
    void /* unknown type, empty encoding */ coordinationReaderCallers;
    void /* unknown type, empty encoding */ coordinationWriterCallers;
}

@property (nonatomic, copy) NSURL *presentedItemURL;
@property (nonatomic, retain) NSOperationQueue *presentedItemOperationQueue;

- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (void)dealloc;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(void (^)(NSError *))a0;
- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)_willResignActiveNotificationWithNotif:(id)a0;
- (void)_willEnterForegroundNotificationWithNotif:(id)a0;

@end
