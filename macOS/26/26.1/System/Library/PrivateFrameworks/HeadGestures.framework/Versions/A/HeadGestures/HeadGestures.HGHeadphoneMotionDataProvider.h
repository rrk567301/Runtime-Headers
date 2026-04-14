@class NSString;

@interface HeadGestures.HGHeadphoneMotionDataProvider : HeadGestures.HGMotionDataProvider <CMHeadphoneMotionManagerDelegate> {
    void /* unknown type, empty encoding */ cmMotionManager;
    void /* unknown type, empty encoding */ headphoneConnected;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (void)headphoneMotionManagerDidConnect:(id)a0;
- (void)headphoneMotionManagerDidDisconnect:(id)a0;

@end
