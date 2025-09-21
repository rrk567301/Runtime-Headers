@interface OITSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)backtrace;
+ (id)new;
+ (id)caller;
+ (id)callee;

- (void)dealloc;
- (id)caller;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)backtraceString;
- (id)callee;
- (id)callerAtIndex:(long long)a0;
- (id)initWithAdjustment:(int)a0;

@end
