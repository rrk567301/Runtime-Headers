@class NSProgress, AMPDevice, FINode;

@interface DSiTunesProgress : NSObject {
    NSProgress *_progress;
    AMPDevice *_device;
    struct TNodePtr { FINode *fFINode; } _deviceNode;
    double _lastProgressSent;
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct { struct TKeyValueObserver *__cap_; } ; } _observers;
}

+ (struct TNodePtr { id x0; })nodeForDevice:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)progress;
- (void)aboutToTearDown;
- (id)initWithDevice:(id)a0 andProgress:(id)a1;
- (void)sendUpdate;

@end
