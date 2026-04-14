@class _TtC20PreviewsFoundationOS19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC20PreviewsFoundationOS19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (void)cancel;
- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
