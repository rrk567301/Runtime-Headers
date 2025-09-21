@class NSString;

@interface RBStateCaptureInvalidator : NSObject <RBSInvalidatable> {
    unsigned long long _handle;
    char _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;

@end
