@class NSString, NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : ICDeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)handleImageCaptureEventNotification:(id)a0;
- (id)deviceManagerConnection;
- (void)startDeviceWithHandle:(id)a0;
- (void)ejectImp:(id)a0;
- (void)syncClockImp:(id)a0;
- (void)getFileThumbnailImp:(id)a0;
- (void)getFileMetadataImp:(id)a0;
- (void)getFileDataImp:(id)a0;
- (void)deleteFileImp:(id)a0;
- (void)downloadFileImp:(id)a0;
- (long long)checkFile:(id)a0 andDevice:(id)a1;
- (void)executeCompletionBlockWithErrorCode:(long long)a0 info:(id)a1 file:(id)a2 completionDict:(id)a3 completionBlk:(id /* block */)a4;
- (void)notifyAddedItems:(id)a0;
- (void)notifyRemovedItems:(id)a0;
- (void)notifyUpdatedItems:(id)a0;
- (void)notifyPtpEvent:(id)a0;
- (void)notifyStatus:(id)a0;
- (void)updateCameraFolder:(id)a0 withInfo:(id)a1;
- (void)updateCameraFile:(id)a0 withInfo:(id)a1;
- (void)sendDevicePTPCommandImp:(id)a0;
- (void)registerDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;
- (void)unregisterDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;
- (void)handleEventImp:(id)a0;
- (void)updateCameraFile:(id)a0 withKeywords:(id)a1;

@end
