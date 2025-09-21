@class PKPaymentPass, NSString, IMOneTimeCodeAccelerator, PKPassVerificationMethod, NSObject;
@protocol OS_dispatch_queue, PKPaymentVerificationObserverDelegate, OS_dispatch_source;

@interface PKPaymentVerificationObserver : NSObject {
    PKPassVerificationMethod *_verificationMethod;
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    IMOneTimeCodeAccelerator *_oneTimeCodeObserver;
}

@property (readonly, retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (weak, nonatomic) id<PKPaymentVerificationObserverDelegate> delegate;
@property (nonatomic) BOOL skipSourceCheck;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)_queue_stop;
- (id)initWithPaymentPass:(id)a0 verificationChannel:(id)a1 identifier:(id)a2;
- (id)initWithVerificationMethod:(id)a0 identifier:(id)a1;
- (void)startObservingVerificationSourceWithTimeout:(double)a0;

@end
