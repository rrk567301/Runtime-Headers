@class NSString;

@interface CADSPRecorderTapPointModel : NSObject <NSCopying, NSMutableCopying> {
    struct RecordTapPointModel { struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } filePath; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; unsigned int boxPortIndex; BOOL isSynchronous; } _this;
}

@property (readonly, copy, nonatomic) NSString *audioFilePath;
@property (readonly, copy, nonatomic) NSString *boxName;
@property (readonly, nonatomic) unsigned int portIndex;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)audioFilePath;
- (id)boxName;
- (unsigned int)portIndex;

@end
