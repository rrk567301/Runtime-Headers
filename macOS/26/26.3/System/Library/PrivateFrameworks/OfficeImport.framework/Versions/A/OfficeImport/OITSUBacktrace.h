@interface OITSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)backtrace;
+ (id)new;
+ (id)caller;
+ (id)callee;

- (id)caller;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)backtraceString;
- (id)callee;
- (id)callerAtIndex:(long long)a0;
- (id)initWithAdjustment:(int)a0;

@end
