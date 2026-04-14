@class AVTimeFormatter;

@interface AVTimeIndicatorPopover : NSPopover {
    AVTimeFormatter *_timeFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateTimeValue:(double)a0;

@end
