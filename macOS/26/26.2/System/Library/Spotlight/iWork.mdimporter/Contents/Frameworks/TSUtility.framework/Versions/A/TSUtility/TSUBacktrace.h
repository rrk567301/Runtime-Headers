@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)backtrace;
+ (id)new;
+ (id)caller;
+ (id)callee;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)caller;
- (id)init;
- (void)dealloc;
- (id)backtraceString;
- (id)callee;
- (id)callerAtIndex:(long long)a0;
- (id)initWithAdjustment:(int)a0;

@end
