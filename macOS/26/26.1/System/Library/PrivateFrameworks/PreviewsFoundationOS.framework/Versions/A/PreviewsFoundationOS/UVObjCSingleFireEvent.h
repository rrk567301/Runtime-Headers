@class _TtC20PreviewsFoundationOS19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC20PreviewsFoundationOS19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (void)fire;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver:(id /* block */)a0;

@end
