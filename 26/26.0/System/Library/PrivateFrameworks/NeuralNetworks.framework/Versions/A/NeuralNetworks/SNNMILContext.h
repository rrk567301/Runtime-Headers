@interface SNNMILContext : NSObject {
    struct shared_ptr<MIL::MILContext> { struct MILContext *__ptr_; struct __shared_weak_count *__cntrl_; } _context;
}

@property (readonly, nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } opsetName;

+ (id)valueForIRTensorValueType:(const struct IRTensorValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;
+ (id)valueForIRListValueType:(const struct IRListValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;
+ (id)valueForIRTensorValue:(const struct IRTensorValue { void /* function */ **x0; } *)a0;
+ (id)valueForIRValue:(const struct IRValue { void /* function */ **x0; } *)a0;
+ (id)valueForIRValueType:(const struct IRValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (struct shared_ptr<MIL::MILContext> { struct MILContext *x0; struct __shared_weak_count *x1; })context;
- (void).cxx_destruct;
- (id)initWithOpsetName:(id)a0;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; })milValueForScalarWithBytes:(void *)a0 dataType:(unsigned long long)a1;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; })milValueForString:(id)a0;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; })milValueForTensorBlobWithFilename:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 offset:(id)a3;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; })milValueForTensorWithBytes:(void *)a0 shape:(id)a1 dataType:(unsigned long long)a2;
- (const void *)platformOpset;

@end
