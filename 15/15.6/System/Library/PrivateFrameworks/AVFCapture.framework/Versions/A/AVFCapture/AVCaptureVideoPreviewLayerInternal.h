@class AVWeakReference, NSString, NSArray, CALayer, NSDictionary, AVCaptureSession, NSObject, NSMutableArray, AVCaptureConnection, AVSemanticStyle;
@protocol OS_dispatch_queue;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    CALayer *sublayer;
    struct CGSize { double width; double height; } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    unsigned int imageQueueSlot;
    struct CGSize { double width; double height; } previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    char disableActions;
    AVWeakReference *weakReference;
    char isPreviewing;
    long long orientation;
    char automaticallyAdjustsMirroring;
    char mirrored;
    char isPresentationLayer;
    char visible;
    char isPaused;
    char chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } captureDeviceTransform;
    double rollAdjustment;
    char depthDataDeliverySupported;
    char depthDataDeliveryEnabled;
    char filterRenderingEnabled;
    char unoptimizedFilterRenderingEnabled;
    NSArray *videoPreviewFilters;
    char semanticStyleRenderingSupported;
    char semanticStyleRenderingEnabled;
    AVSemanticStyle *semanticStyle;
    double oddScreenWidth;
    double oddScreenScale;
    char portraitAutoSuggestEnabled;
    char portraitAutoSuggestSupported;
    NSMutableArray *metadataObjectLayers;
    NSDictionary *metadataObjectLayerStringAttributes;
    double metadataObjectLayerContentScale;
    struct CGColor { } *metadataObjectLayerStrokeColor;
    struct CGColor { } *metadataObjectLayerFillColor;
    struct CGColor { } *alternativeMetadataObjectLayerStrokeColor;
    char zoomPictureInPictureOverlaySupported;
    char zoomPictureInPictureOverlayEnabled;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomPictureInPictureOverlayRect;
}

@end
