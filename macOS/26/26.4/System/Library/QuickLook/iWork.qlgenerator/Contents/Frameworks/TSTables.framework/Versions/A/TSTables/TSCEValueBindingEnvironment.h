@class , TSCEValue, __end_;

@interface TSCEValueBindingEnvironment : NSObject <NSCopying> {
    struct vector<TSCEValueBindings *, std::allocator<TSCEValueBindings *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _bindings;
    TSCEValue *_syntaxErrorValue;
}

- (id)lookup:(const unsigned int *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;
- (id)currentBindingsDebug;
- (void)popScope;
- (void)pushScope;

@end
