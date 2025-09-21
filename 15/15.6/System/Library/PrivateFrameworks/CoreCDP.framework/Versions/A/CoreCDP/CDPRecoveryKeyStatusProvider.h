@class CDPContext;

@interface CDPRecoveryKeyStatusProvider : NSObject {
    CDPContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)isRecoveryKeySetInSOSWithError:(id *)a0;
- (char)idmsHasRK;
- (char)isRecoveryKeySetInOctagonWithError:(id *)a0;

@end
