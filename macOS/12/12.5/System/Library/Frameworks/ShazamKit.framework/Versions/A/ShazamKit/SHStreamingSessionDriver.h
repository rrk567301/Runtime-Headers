@class NSUUID, SHSignatureMetrics, NSString, NSDate, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHMatcherDelegate>

@property (retain) NSDate *intermissionDeadline;
@property double currentRequiredDuration;
@property (retain) SHSignatureBuffer *signatureBuffer;
@property (readonly) SHSignatureMetrics *metrics;
@property (retain) NSUUID *matchingSignatureID;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (weak) id<SHSessionDriverDelegate> sessionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2;
- (id)initWithSignatureBuffer:(id)a0;
- (void)flow:(id)a0 time:(id)a1;
- (BOOL)canPerformMatch;
- (id)signatureForMatching;
- (void)receivedSignature:(id)a0 retry:(double)a1 intermission:(double)a2 dropCurrentSignature:(BOOL)a3;
- (void)matcher:(id)a0 didFindMatch:(id)a1;
- (void)matcher:(id)a0 didNotFindMatch:(id)a1;
- (void)matcher:(id)a0 didFail:(id)a1;
- (void)matcher:(id)a0 didFinishWithOutcome:(long long)a1;

@end
