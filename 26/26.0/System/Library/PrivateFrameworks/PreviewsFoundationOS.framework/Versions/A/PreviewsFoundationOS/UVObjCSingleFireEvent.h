@class _TtC20PreviewsFoundationOS19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC20PreviewsFoundationOS19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (void)fire;
- (void)cancel;
- (id)init;
- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;

@end
