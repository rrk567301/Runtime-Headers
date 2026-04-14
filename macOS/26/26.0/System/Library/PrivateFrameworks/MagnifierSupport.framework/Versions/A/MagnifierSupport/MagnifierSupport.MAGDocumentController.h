@interface MagnifierSupport.MAGDocumentController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ env;
    void /* unknown type, empty encoding */ capturedPhotoSubscription;
    void /* unknown type, empty encoding */ videoPreviewLayer;
    void /* unknown type, empty encoding */ captureEventHandler;
    void /* unknown type, empty encoding */ advancedEventHandler;
    void /* unknown type, empty encoding */ captureService;
    void /* unknown type, empty encoding */ frameProviderService;
    void /* unknown type, empty encoding */ documentFramingService;
    void /* unknown type, empty encoding */ textDetectionService;
    void /* unknown type, empty encoding */ controlsQueue;
    void /* unknown type, empty encoding */ _ignorePublishedEnvChanges;
    void /* unknown type, empty encoding */ _isZoomSliderInteracting;
    void /* unknown type, empty encoding */ _updatingZoomFromKeyboardShortcut;
    void /* unknown type, empty encoding */ _speechModel;
    void /* unknown type, empty encoding */ _newCurrentPage;
    void /* unknown type, empty encoding */ _currentPageUUID;
    void /* unknown type, empty encoding */ liveViewPage;
    void /* unknown type, empty encoding */ _capturedPhoto;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ _undoSpec;
    void /* unknown type, empty encoding */ undoSpec;
    void /* unknown type, empty encoding */ _doc;
    void /* unknown type, empty encoding */ _viewerMode;
    void /* unknown type, empty encoding */ _readerBlockManager;
    void /* unknown type, empty encoding */ _readerBannerMessage;
    void /* unknown type, empty encoding */ _readerTextDidUpdate;
    void /* unknown type, empty encoding */ storedCheckingReaderModeAvailable;
    void /* unknown type, empty encoding */ storedShouldGetLiveFrameForBlur;
}

- (void)inputPortChangedWithNotification:(id)a0;
- (void)stopSpeakingExceptCurrentNotificationCallback:(id)a0;

@end
