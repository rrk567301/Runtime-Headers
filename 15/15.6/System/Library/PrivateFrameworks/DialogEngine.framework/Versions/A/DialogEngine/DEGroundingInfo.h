@interface DEGroundingInfo : NSObject

@property struct GroundingInfo { unsigned long long mCount; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } mTimestamps; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } mText; } This;

- (void).cxx_destruct;
- (int)count;
- (id).cxx_construct;
- (id)text;
- (id)timestamps;
- (id)init:(int)a0 timeStamps:(id)a1 text:(id)a2;

@end
