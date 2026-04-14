@interface XQueryBuiltInFunction : NSObject {
    void /* function */ *_proc;
}

+ (void)initialize;
+ (id)builtInFunctionWithProc:(void /* function */ *)a0;
+ (void /* function */ *)functionForQName:(id)a0;

- (void /* function */ *)proc;
- (id)initWithProc:(void /* function */ *)a0;

@end
