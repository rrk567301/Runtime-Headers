@protocol _VZMultiTouchEventSender;

@interface _VZMultiTouchDevice : NSObject {
    id<_VZMultiTouchEventSender> _eventSender;
    unsigned long long _multiTouchDeviceIndex;
}

- (void).cxx_destruct;
- (void)sendMultiTouchEvents:(id)a0;

@end
