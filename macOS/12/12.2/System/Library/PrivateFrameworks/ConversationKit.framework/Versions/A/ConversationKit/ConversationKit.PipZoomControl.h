@interface ConversationKit.PipZoomControl : NSObject {
    void /* unknown type, empty encoding */ minimumZoomFactor;
    void /* unknown type, empty encoding */ zoomCameraSwitchFactor;
    void /* unknown type, empty encoding */ zoomControlOffset;
    void /* unknown type, empty encoding */ maximumZoomFactor;
    void /* unknown type, empty encoding */ currentZoomFactor;
    void /* unknown type, empty encoding */ initialZoomFactor;
}

@property (class, nonatomic, readonly) BOOL isZoomSupported;

- (id)init;

@end
