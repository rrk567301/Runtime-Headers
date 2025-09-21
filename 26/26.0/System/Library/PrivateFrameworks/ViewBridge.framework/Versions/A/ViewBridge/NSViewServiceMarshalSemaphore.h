@interface NSViewServiceMarshalSemaphore : NSCFRunLoopSemaphore {
    int _processIdentifier;
}

- (id)initWithProcessIdentifier:(int)a0;
- (BOOL)wait:(double)a0;

@end
