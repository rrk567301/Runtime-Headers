@class NSString, PKPassVerificationMethod, PKPaymentPass;
@protocol PKPaymentVerificationObserverDelegate;

@interface PKPaymentVerificationObserver : NSObject {
    PKPassVerificationMethod *_verificationMethod;
}

@property (readonly, retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (weak, nonatomic) id<PKPaymentVerificationObserverDelegate> delegate;
@property (nonatomic) BOOL skipSourceCheck;

- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_stop;
- (id)initWithPaymentPass:(id)a0 verificationChannel:(id)a1 identifier:(id)a2;
- (id)initWithVerificationMethod:(id)a0 identifier:(id)a1;
- (void)startObservingVerificationSourceWithTimeout:(double)a0;

@end
