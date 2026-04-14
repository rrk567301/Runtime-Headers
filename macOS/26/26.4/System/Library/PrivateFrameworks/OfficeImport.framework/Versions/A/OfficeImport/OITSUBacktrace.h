@interface OITSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)new;
+ (id)backtrace;
+ (id)caller;
+ (id)callee;

- (id)caller;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;
- (id)backtraceString;
- (id)callee;
- (id)callerAtIndex:(long long)a0;
- (id)initWithAdjustment:(int)a0;

@end
