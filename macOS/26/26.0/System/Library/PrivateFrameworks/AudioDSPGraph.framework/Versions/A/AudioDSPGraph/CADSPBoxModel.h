@class NSString;

@interface CADSPBoxModel : NSObject <NSCopying, NSMutableCopying> {
    struct BoxModel { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } name; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } className; struct optional<AudioDSPGraph::IR::AudioComponentDescription> { union { char __null_state_; struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } __val_; } ; BOOL __engaged_; } audioComponentDescription; unsigned int numberOfInputs; unsigned int numberOfOutputs; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } subsetName; } _this;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly, copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSString *subsetName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)className;
- (id)name;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfOutputs;
- (unsigned long long)numberOfInputs;
- (BOOL)getAudioComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0;
- (id)subsetName;

@end
