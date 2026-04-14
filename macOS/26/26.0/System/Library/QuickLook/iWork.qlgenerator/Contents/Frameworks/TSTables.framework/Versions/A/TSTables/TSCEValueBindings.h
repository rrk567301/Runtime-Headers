@class __cap_, __end_;

@interface TSCEValueBindings : NSObject <NSCopying> {
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _valuesBySymbol;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lookup:(const unsigned int *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;

@end
