@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (void)_registerCallstack;

@end
