@class NSString, RPBHost, __cap_, __end_;

@interface AudioDSPManager : NSObject <RPBServerListener, HAL_DSP_Factory, HAL_DSP_PropertySet> {
    struct SystemConfiguration { struct ConfigurationContext { int mOS; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } mResourcePath; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } mTuningBasePath; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } mAcousticID; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } mMacBoardID; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } mHwModelName; BOOL mIsIntel; } mContext; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } mLayoutID; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mHWIdentifier; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } mTuningRootDirectory; struct unordered_map<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>>> { struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, adm::DSPGraphBasicConfiguration>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } mIOSemanticToDSPMap; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mProcessName; struct AudioCaptureOptions { unsigned int mExclaveAudioCapturePoints; } mAudioCaptureOptions; BOOL mDSPBypass; } _config;
    struct vector<DSPProcessor *__weak, std::allocator<DSPProcessor *__weak>> { __end_ **__begin_; __cap_ **x0; id *x1; } _processors;
    RPBHost *_remoteProcessingBlockHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createProcessor:(id)a0 withHost:(id)a1;
- (id)getFactoryPropertySet;
- (id)getHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withQualifierData:(id)a1;
- (id)getHostedDSPPropertyInfoArray;
- (BOOL)hasHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (BOOL)setHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withData:(id)a1 withQualifier:(id)a2 error:(id *)a3;
- (void)remoteProcessingBlockDisconnect;
- (void)initializeAudioCapture;
- (void)remoteProcessingBlockConnect;
- (void)remoteProcessingBlockConnectServer:(id)a0;
- (void)remoteProcessingBlockDisconnectServer:(id)a0;
- (void)remoteProcessingBlockServerWillStartRunning:(id)a0;
- (void)remoteProcessingBlockServerWillStopRunning:(id)a0;
- (BOOL)setHostedDSPPropertyAtAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 withData:(id)a1 error:(id *)a2;

@end
