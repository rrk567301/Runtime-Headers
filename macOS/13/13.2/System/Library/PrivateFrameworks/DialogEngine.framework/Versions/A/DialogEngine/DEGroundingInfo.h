@interface DEGroundingInfo : NSObject

@property struct GroundingInfo { unsigned long long mCount; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } mTimestamps; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mText; } This;

- (int)count;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)text;
- (id)timestamps;
- (id)init:(int)a0 timeStamps:(id)a1 text:(id)a2;

@end
