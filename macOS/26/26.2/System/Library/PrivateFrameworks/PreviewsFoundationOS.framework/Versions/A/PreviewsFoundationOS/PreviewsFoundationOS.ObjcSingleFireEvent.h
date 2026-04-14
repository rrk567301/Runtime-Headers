@interface PreviewsFoundationOS.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (void)cancel;
- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
