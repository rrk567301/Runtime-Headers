@class FINode;

@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct TKeyValueObserver *__cap_; } _observers;
}

@property (weak) FINode *progressNode;

- (void)stopObserving;
- (id).cxx_construct;
- (void)startObserving:(id)a0;
- (void).cxx_destruct;
- (void)progressChanged:(id)a0;

@end
