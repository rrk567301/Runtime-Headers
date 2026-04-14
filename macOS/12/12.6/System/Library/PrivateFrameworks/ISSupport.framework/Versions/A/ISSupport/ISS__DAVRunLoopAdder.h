@interface ISS__DAVRunLoopAdder : NSObject {
    struct __CFRunLoopSource { } *_source;
}

- (id)initWithRunLoopSource:(struct __CFRunLoopSource { } *)a0;
- (void)addRunLoopSource;

@end
