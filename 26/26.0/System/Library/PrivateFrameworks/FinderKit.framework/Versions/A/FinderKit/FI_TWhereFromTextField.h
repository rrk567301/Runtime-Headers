@interface FI_TWhereFromTextField : FI_TTextField {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _removeURLHandler;
    struct function<bool (FI_TMenuItem *)> { struct __value_func<bool (FI_TMenuItem *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _removeURLValidator;
}

@property (nonatomic) unsigned long long numURLs;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (void)setRemoveURLHandler:(const void *)a0;
- (void)setRemoveURLValidator:(const void *)a0;

@end
