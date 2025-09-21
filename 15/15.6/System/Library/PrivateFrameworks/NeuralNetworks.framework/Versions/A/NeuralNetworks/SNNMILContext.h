@interface SNNMILContext : NSObject {
    struct shared_ptr<MIL::MILContext> { struct MILContext *__ptr_; struct __shared_weak_count *__cntrl_; } _context;
}

@property (readonly, nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } opsetName;

+ (id)valueForIRTensorValueType:(const struct IRTensorValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a1;
+ (id)valueForIRListValueType:(const struct IRListValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a1;
+ (id)valueForIRTensorValue:(const struct IRTensorValue { void /* function */ **x0; } *)a0;
+ (id)valueForIRValue:(const struct IRValue { void /* function */ **x0; } *)a0;
+ (id)valueForIRValueType:(const struct IRValueType { void /* function */ **x0; } *)a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a1;

- (void)dealloc;
- (id)init;
- (struct shared_ptr<MIL::MILContext> { struct MILContext *x0; struct __shared_weak_count *x1; })context;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOpsetName:(id)a0;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueForScalarWithBytes:(void *)a0 dataType:(unsigned long long)a1;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueForString:(id)a0;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueForTensorBlobWithFilename:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 offset:(id)a3;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueForTensorWithBytes:(void *)a0 shape:(id)a1 dataType:(unsigned long long)a2;
- (const void *)platformOpset;

@end
