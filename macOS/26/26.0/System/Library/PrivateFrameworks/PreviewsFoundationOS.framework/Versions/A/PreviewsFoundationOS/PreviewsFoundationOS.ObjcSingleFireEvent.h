@interface PreviewsFoundationOS.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (void)fire;
- (void)cancel;
- (id)init;
- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;

@end
