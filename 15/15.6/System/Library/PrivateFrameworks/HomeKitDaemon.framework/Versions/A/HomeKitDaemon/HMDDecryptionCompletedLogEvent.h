@interface HMDDecryptionCompletedLogEvent : HMMLogEvent

@property (readonly) char didDecryptionFail;

+ (id)decryptionCompletedWithFailure:(char)a0;

- (id)initWithFailure:(char)a0;

@end
