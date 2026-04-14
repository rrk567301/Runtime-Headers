@class NSString, AVOutputContextDestinationChangeInternal;

@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSString *cancellationReason;
@property (readonly) BOOL didRequireAuthorization;

- (void)markAsFinished;
- (id)init;
- (id)description;
- (void)dealloc;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString { } *)a0;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString { } *)a0;
- (void)markAsCancelledWithReason:(id)a0;
- (void)markAsFailed;
- (void)_setStatus:(long long)a0 cancellationReason:(id)a1;
- (void)markAsInProgress;

@end
