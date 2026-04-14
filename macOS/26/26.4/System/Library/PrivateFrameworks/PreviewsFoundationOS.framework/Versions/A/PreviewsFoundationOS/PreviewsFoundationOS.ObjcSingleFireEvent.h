@interface PreviewsFoundationOS.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (void)fire;
- (void)cancel;
- (void).cxx_destruct;
- (void)addObserver:(id /* block */)a0;
- (id)init;

@end
