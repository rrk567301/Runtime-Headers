@class NSString, NSArray;

@interface SAStackIterator : NSObject <SAFrameIterator> {
    NSArray *_stack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSwiftAsyncStack;
- (BOOL)hasStack;
- (BOOL)hasUserStack;
- (BOOL)hasKernelStack;
- (void)iterateFramesWithBacktraceStyle:(unsigned long long)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
