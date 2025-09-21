@interface FI_TColumnNameTextField : FI_TTextField {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[32]; } __buf_; void *__f_; } __f_; } _renameFunc;
    BOOL _becomingFirstResponder;
}

@property (nonatomic) BOOL shouldEdit;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (void)setRenameFunc:(const void *)a0;

@end
