@class _PASLock;

@interface SGMultiLabelEspressoClassifierCache : NSObject {
    _PASLock *_currentClassifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)outputDimensionWithFile:(id)a0;
- (id)predict:(id)a0 withFile:(id)a1;
- (BOOL)setCachedEspressoClassifierWithFile:(id)a0;

@end
