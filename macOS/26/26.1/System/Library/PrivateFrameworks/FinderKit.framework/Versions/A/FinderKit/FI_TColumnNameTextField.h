@interface FI_TColumnNameTextField : FI_TTextField {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _renameFunc;
    BOOL _becomingFirstResponder;
}

@property (nonatomic) BOOL shouldEdit;

+ (Class)cellClass;

- (BOOL)becomeFirstResponder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)setRenameFunc:(const void *)a0;

@end
