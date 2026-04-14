@class NSString;

@interface CADSPWireModel : NSObject <NSCopying, NSMutableCopying> {
    struct WireModel { struct WireEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; unsigned int portIndex; } source; struct WireEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; unsigned int portIndex; } destination; struct variant<std::monostate, AudioDSPGraph::IR::WireConfiguration, AudioDSPGraph::IR::WireConfigurationAlias> { struct __impl<std::monostate, AudioDSPGraph::IR::WireConfiguration, AudioDSPGraph::IR::WireConfigurationAlias> { union __union<std::__variant_detail::_Trait::_Available, 0UL, std::monostate, AudioDSPGraph::IR::WireConfiguration, AudioDSPGraph::IR::WireConfigurationAlias> { char __dummy; struct __alt<0UL, std::monostate> { struct monostate { } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, AudioDSPGraph::IR::WireConfiguration, AudioDSPGraph::IR::WireConfigurationAlias> { char __dummy; struct __alt<1UL, AudioDSPGraph::IR::WireConfiguration> { struct WireConfiguration { struct StreamDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } streamDescription; unsigned int blockSize; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, AudioDSPGraph::IR::WireConfigurationAlias> { char __dummy; struct __alt<2UL, AudioDSPGraph::IR::WireConfigurationAlias> { struct WireConfigurationAlias { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } name; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL> { } __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } configuration; } _this;
}

@property (readonly, copy, nonatomic) NSString *audioStreamConfigurationName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)audioStreamConfigurationName;
- (id)copyBoxNameOfEndpoint:(unsigned int)a0;
- (BOOL)getAudioStreamConfiguration:(struct CADSPAudioStreamConfiguration { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (unsigned int)portIndexOfEndpoint:(unsigned int)a0;

@end
