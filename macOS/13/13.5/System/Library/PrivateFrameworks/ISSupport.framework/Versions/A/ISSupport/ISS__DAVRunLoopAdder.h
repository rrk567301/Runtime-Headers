@interface ISS__DAVRunLoopAdder : NSObject {
    struct __CFRunLoopSource { } *_source;
}

- (void)addRunLoopSource;
- (id)initWithRunLoopSource:(struct __CFRunLoopSource { } *)a0;

@end
