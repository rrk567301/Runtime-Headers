@interface NSTreeDetailBinder : NSArrayDetailBinder {
    struct __treeDetailBinderFlags { unsigned int _reservedTreeDetailBinder : 32; } _treeDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (char)isUsableWithObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_handlesSelectAll;
- (void)_selectAllContent:(id)a0 inDetailController:(id)a1;

@end
