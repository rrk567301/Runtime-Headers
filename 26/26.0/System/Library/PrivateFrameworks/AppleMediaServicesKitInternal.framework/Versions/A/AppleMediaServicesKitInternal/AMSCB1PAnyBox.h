@class NSArray, NSDictionary, NSData, NSDate, NSNumber, AMSCB1PUTF8String;

@interface AMSCB1PAnyBox : NSObject {
    struct Any { struct variant<std::monostate, bool, double, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { struct __impl<std::monostate, bool, double, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, std::monostate, bool, double, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<0UL, std::monostate> { struct monostate { } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, bool, double, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<1UL, bool> { BOOL __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, double, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<2UL, double> { double __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL, long long, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<3UL, long long> { long long __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 4UL, unsigned long long, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<4UL, unsigned long long> { unsigned long long __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 5UL, std::string, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<5UL, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 6UL, AMSCore::DataBuffer, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<6UL, AMSCore::DataBuffer> { struct DataBuffer { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 7UL, std::chrono::time_point<std::chrono::system_clock>, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<7UL, std::chrono::time_point<std::chrono::system_clock>> { struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> { struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } __d_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 8UL, std::map<std::string, AMSCore::Any, std::less<void>>, std::vector<AMSCore::Any>> { char __dummy; struct __alt<8UL, std::map<std::string, AMSCore::Any, std::less<void>>> { struct map<std::string, AMSCore::Any, std::less<void>, std::allocator<std::pair<const std::string, AMSCore::Any>>> { struct __tree<std::__value_type<std::string, AMSCore::Any>, std::__map_value_compare<std::string, std::__value_type<std::string, AMSCore::Any>, std::less<void>>, std::allocator<std::__value_type<std::string, AMSCore::Any>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 9UL, std::vector<AMSCore::Any>> { char __dummy; struct __alt<9UL, std::vector<AMSCore::Any>> { struct vector<AMSCore::Any, std::allocator<AMSCore::Any>> { struct Any *__begin_; struct Any *__end_; struct Any *__cap_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 10UL> { } __tail; } __tail; } __tail; } __tail; } __tail; } __tail; } __tail; } __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } mAny; } _any;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) AMSCB1PUTF8String *stringValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) NSArray *arrayValue;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithInteger:(long long)a0;
- (id)initWithTimestamp:(double)a0;
- (id)initWithString:(const char *)a0;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (id).cxx_construct;
- (id)initWithArray:(id)a0;
- (id)initWithBool:(BOOL)a0;
- (unsigned long long)hash;
- (id)initWithDouble:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToBox:(id)a0;

@end
