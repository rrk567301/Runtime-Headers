@class NSDictionary, NSMutableArray;

@interface SFPasswordAsstModel : NSObject {
    unsigned int _minLength;
    unsigned int _maxLength;
    unsigned int _curLength;
    unsigned int _setSize;
    double _entropy;
    NSMutableArray *_errorMessages;
    long long mPWAContextHandle;
    NSDictionary *mPWAPolicy;
}

- (void)clear;
- (void)dealloc;
- (unsigned int)minLength;
- (void)setMaxLength:(unsigned int)a0;
- (id)init;
- (unsigned int)maxLength;
- (double)entropy;
- (void)setMinLength:(unsigned int)a0;
- (unsigned int)setSize;
- (id)localizedError:(id)a0;
- (void)addErrorMessage:(id)a0;
- (void)calculate:(id)a0 :(id)a1 :(double *)a2 :(int *)a3;
- (unsigned int)curLength;
- (id)errorMessages;
- (void)extractErrors:(id)a0;
- (long long)pwaContextHandle;
- (id)pwaPolicy;
- (id)remapCracklibError:(id)a0;

@end
