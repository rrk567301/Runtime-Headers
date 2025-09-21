@interface NSViewServiceMarshalSemaphore : NSCFRunLoopSemaphore {
    int _processIdentifier;
}

- (char)wait:(double)a0;
- (id)initWithProcessIdentifier:(int)a0;

@end
