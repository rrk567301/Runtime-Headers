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

- (void)dealloc;
- (id)init;
- (void)clear;
- (unsigned int)minLength;
- (unsigned int)maxLength;
- (void)setMinLength:(unsigned int)a0;
- (void)setMaxLength:(unsigned int)a0;
- (void)calculate:(id)a0 :(id)a1 :(double *)a2 :(int *)a3;
- (long long)pwaContextHandle;
- (id)pwaPolicy;
- (double)entropy;
- (void)extractErrors:(id)a0;
- (id)localizedError:(id)a0;
- (void)addErrorMessage:(id)a0;
- (unsigned int)curLength;
- (unsigned int)setSize;
- (id)errorMessages;
- (id)remapCracklibError:(id)a0;

@end
