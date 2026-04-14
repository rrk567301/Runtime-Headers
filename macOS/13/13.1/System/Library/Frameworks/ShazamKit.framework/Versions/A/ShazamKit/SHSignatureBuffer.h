@class NSMutableArray;

@interface SHSignatureBuffer : NSObject

@property double maximumSignatureDuration;
@property double minimumSignatureDuration;
@property double bufferMaxSize;
@property (readonly) NSMutableArray *slots;
@property (readonly) double currentSignatureDuration;

- (void).cxx_destruct;
- (void)reset;
- (double)duration;
- (void)flow:(id)a0 time:(id)a1;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2;
- (id)generateCurrentSignature;
- (void)discardSignatureWithID:(id)a0;

@end
