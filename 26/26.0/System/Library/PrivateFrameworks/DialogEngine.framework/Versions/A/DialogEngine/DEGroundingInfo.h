@interface DEGroundingInfo : NSObject

@property struct GroundingInfo { unsigned long long mCount; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } mTimestamps; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mText; } This;

- (id)timestamps;
- (int)count;
- (id)text;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init:(int)a0 timeStamps:(id)a1 text:(id)a2;

@end
