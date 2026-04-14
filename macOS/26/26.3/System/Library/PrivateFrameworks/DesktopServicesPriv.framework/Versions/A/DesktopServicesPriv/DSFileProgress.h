@class FINode;

@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct { struct TKeyValueObserver *__cap_; } ; } _observers;
}

@property (weak) FINode *progressNode;

- (void)stopObserving;
- (void).cxx_destruct;
- (void)startObserving:(id)a0;
- (id).cxx_construct;
- (void)progressChanged:(id)a0;

@end
