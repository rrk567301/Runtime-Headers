@interface MapsSuggestionsNotification : NSObject <NSCopying> {
    struct Notification { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } darwinNotification; int token; unsigned long long state; } _notification;
}

@property (readonly, nonatomic) const char *darwinNotification;
@property (readonly, nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCppNotification:(const void *)a0;
- (char)stateCouldHaveBeenPayloadString:(id)a0;

@end
