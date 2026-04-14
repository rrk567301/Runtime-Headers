@class AVInputContextDestinationChangeInternal;

@interface AVInputContextDestinationChange : NSObject {
    AVInputContextDestinationChangeInternal *_ivars;
}

@property (readonly) long long status;

- (void)dealloc;
- (id)init;
- (void)markAsFinished;
- (id)description;
- (void)_setStatus:(long long)a0;
- (void)markAsFailed;
- (void)changeToTerminalStatusBasedOnInputRouteChangeEndedReason:(struct __CFString { } *)a0;
- (void)changeToTerminalStatusBasedOnInputRouteConfigUpdatedReason:(struct __CFString { } *)a0;
- (void)markAsInProgress;

@end
