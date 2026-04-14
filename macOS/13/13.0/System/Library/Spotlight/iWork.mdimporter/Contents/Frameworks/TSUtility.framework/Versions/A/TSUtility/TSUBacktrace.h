@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)new;
+ (id)caller;
+ (id)backtrace;
+ (id)callee;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)caller;
- (id)callee;
- (id)initWithAdjustment:(int)a0;
- (id)backtraceString;
- (id)callerAtIndex:(long long)a0;

@end
