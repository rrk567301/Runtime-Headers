@class SHSignature, NSString, SHSignatureMetrics, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHMatcherDelegate>

@property BOOL waiting;
@property double currentRequiredDuration;
@property double maximumSignatureDuration;
@property double minimumSignatureDuration;
@property (retain) SHSignatureBuffer *signatureBuffer;
@property (retain) SHSignatureMetrics *metrics;
@property (weak) id<SHSessionDriverDelegate> sessionDelegate;
@property (readonly) SHSignature *matchingSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)match;
- (BOOL)isCurrentSignature:(id)a0;
- (double)clampTimeInterval:(double)a0;
- (void)startResetTimerForIntermission:(double)a0 requiredSignatureDuration:(double)a1;
- (void)matcher:(id)a0 didFindMatch:(id)a1;
- (void)matcher:(id)a0 didNotFindMatch:(id)a1;
- (void)matcher:(id)a0 didFail:(id)a1;
- (void)matcher:(id)a0 didFinishWithOutcome:(long long)a1;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1;
- (void)flow:(id)a0 time:(id)a1;

@end
