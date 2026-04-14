@class NSOperationQueue, LAContext, NSObject;
@protocol OS_dispatch_queue;

@interface AutoFillLocalAuthenticationManager : NSObject {
    NSOperationQueue *_authenticationQueue;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_laContextQueue;
}

@property long long currentTouchIDStatus;
@property (readonly, nonatomic) BOOL isBiometricAuthenticationAvailable;

+ (long long)_touchIDStatusForError:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateTouchIDSupportAndAvailability;
- (id)authenticateWithReason:(id)a0 delegate:(id)a1;

@end
