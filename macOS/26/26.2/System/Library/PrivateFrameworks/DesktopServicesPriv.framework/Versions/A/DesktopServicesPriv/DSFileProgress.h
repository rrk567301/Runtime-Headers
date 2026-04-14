@class FINode;

@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct { struct TKeyValueObserver *__cap_; } ; } _observers;
}

@property (weak) FINode *progressNode;

- (void)startObserving:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)progressChanged:(id)a0;

@end
