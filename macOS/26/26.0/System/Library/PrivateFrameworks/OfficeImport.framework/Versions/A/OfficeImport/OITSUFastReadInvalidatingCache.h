@class NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject {
    id /* block */ mGenerator;
    _Atomic id mValue;
    _Atomic long long mReaderCount;
    _Atomic id mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}

- (id)value;
- (void)dealloc;
- (void)invalidate;
- (id)initForReentrant:(BOOL)a0 withGenerator:(id /* block */)a1;
- (void)p_setValue:(id)a0;

@end
