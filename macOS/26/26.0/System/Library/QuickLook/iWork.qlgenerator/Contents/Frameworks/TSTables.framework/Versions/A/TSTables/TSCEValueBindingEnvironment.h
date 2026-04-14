@class TSCEValue, __cap_, __end_;

@interface TSCEValueBindingEnvironment : NSObject <NSCopying> {
    struct vector<TSCEValueBindings *, std::allocator<TSCEValueBindings *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _bindings;
    TSCEValue *_syntaxErrorValue;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)lookup:(const unsigned int *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;
- (id)currentBindingsDebug;
- (void)popScope;
- (void)pushScope;

@end
