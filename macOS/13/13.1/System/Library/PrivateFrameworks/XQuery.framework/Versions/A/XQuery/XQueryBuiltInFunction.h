@interface XQueryBuiltInFunction : NSObject {
    void /* function */ *_proc;
}

+ (void)initialize;
+ (void /* function */ *)functionForQName:(id)a0;
+ (id)builtInFunctionWithProc:(void /* function */ *)a0;

- (id)initWithProc:(void /* function */ *)a0;
- (void /* function */ *)proc;

@end
