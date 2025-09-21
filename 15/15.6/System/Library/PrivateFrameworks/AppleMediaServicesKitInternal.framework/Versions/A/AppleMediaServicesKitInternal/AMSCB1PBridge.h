@class AMSCB1PBundleInfo;

@interface AMSCB1PBridge : NSObject {
    struct tuple<std::string, std::string> { struct __tuple_impl<std::__1::__tuple_indices<0, 1>, std::string, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } __value_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } __value_; } __base_; } _metricsBagProfile;
    AMSCB1PBundleInfo *_metricsBundleInfo;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
