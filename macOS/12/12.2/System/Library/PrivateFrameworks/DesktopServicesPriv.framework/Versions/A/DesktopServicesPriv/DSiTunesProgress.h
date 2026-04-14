@class NSProgress, AMPDevice;

@interface DSiTunesProgress : NSObject {
    struct TNSRef<NSProgress, void> { NSProgress *fRef; } _progress;
    struct TNSRef<AMPDevice, void> { AMPDevice *fRef; } _device;
    struct TNodePtr { struct TNode *fCountedNode; } _deviceNode;
    double _lastProgressSent;
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _observers;
}

+ (struct TNodePtr { struct TNode *x0; })nodeForDevice:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TNSRef<NSProgress, void> { id x0; })progress;
- (id)initWithDevice:(id)a0 andProgress:(id)a1;
- (void)aboutToTearDown;
- (void)sendUpdate;

@end
