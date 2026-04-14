@class SHSignature, NSMutableArray;

@interface SHSignatureBuffer : NSObject

@property double maximumSignatureDuration;
@property double minimumSignatureDuration;
@property double bufferMaxSize;
@property (readonly) NSMutableArray *slots;
@property (readonly) SHSignature *currentSignature;

- (void).cxx_destruct;
- (void)reset;
- (double)duration;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2;
- (void)flow:(id)a0 time:(id)a1;
- (void)discardSignatureWithID:(id)a0;

@end
