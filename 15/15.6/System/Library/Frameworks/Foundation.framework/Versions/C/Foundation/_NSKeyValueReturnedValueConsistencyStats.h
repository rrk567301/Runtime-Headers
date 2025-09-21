@class _NSKeyValueObjectAndKeyPair;

@interface _NSKeyValueReturnedValueConsistencyStats : NSObject {
    _NSKeyValueObjectAndKeyPair *_pair;
    char _capturedInitialValue;
    id _weakCurrentValue;
    id _copiedCurrentValue;
    long long _checkCount;
}

- (void)dealloc;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;

@end
