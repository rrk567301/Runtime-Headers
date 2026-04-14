@class _VZHIDEventFilter;

@interface _VZHIDEventMonitor : NSObject {
    _VZHIDEventFilter *_filter;
    BOOL _enabled;
    BOOL _hasEventTranslators;
}

- (void).cxx_destruct;

@end
