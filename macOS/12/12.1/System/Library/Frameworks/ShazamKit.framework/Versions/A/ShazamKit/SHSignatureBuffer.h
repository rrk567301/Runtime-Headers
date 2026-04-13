@class SHSignature, NSMutableArray;

@interface SHSignatureBuffer : NSObject

@property double maximumSignatureDuration;
@property (retain) NSMutableArray *allSignatures;
@property (readonly) SHSignature *nextSignature;
@property (readonly) long long qos;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithMaximumSignatureDuration:(double)a0 qos:(long long)a1;
- (BOOL)flow:(id)a0 time:(id)a1 error:(id *)a2;
- (void)finishedMatchingSignatureWithID:(id)a0;
- (BOOL)checkFlowError:(id)a0;
- (void)discardOldestSignatureWithID:(id)a0;
- (void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)a0;

@end
