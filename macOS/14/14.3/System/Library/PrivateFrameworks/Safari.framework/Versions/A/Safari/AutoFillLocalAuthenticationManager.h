@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface AutoFillLocalAuthenticationManager : NSObject {
    NSOperationQueue *_authenticationQueue;
    NSObject<OS_dispatch_queue> *_laContextQueue;
}

@property long long currentTouchIDStatus;
@property (readonly, nonatomic) BOOL isBiometricAuthenticationAvailable;

+ (long long)_touchIDStatusForError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)authenticateWithReason:(id)a0 delegate:(id)a1;
- (void)updateTouchIDSupportAndAvailability;

@end
