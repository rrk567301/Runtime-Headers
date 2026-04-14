@class , __end_;

@interface TSCEValueBindings : NSObject <NSCopying> {
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _valuesBySymbol;
}

- (id)lookup:(const unsigned int *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;

@end
