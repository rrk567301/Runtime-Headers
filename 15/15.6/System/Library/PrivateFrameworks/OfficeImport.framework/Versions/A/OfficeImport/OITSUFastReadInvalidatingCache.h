@class NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject {
    id /* block */ mGenerator;
    _Atomic id mValue;
    _Atomic long long mReaderCount;
    _Atomic id mToDispose;
    char mReentrant;
    NSCondition *mCondition;
    char mIsGenerating;
}

- (void)dealloc;
- (void)invalidate;
- (id)value;
- (id)initForReentrant:(char)a0 withGenerator:(id /* block */)a1;
- (void)p_setValue:(id)a0;

@end
