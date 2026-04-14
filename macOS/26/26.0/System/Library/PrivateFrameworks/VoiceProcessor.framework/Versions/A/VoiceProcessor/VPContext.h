@class NSString;

@interface VPContext : NSObject <NSCopying, NSMutableCopying> {
    struct Context { int m_os; struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } m_os_release_type; BOOL m_is_internal_build; BOOL m_is_ui_build; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } m_tuning_resources_path; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } m_temporary_directory_path; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } m_secret_directory_path; BOOL m_is_in_simulation_mode; BOOL m_is_in_audio_dsp_manager_mode; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } m_hardware_model; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } m_hardware_layout_id; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } m_product_type; int m_device_class; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } m_acoustic_id; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } m_simulator_version; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } m_simulator_file_capture_level; struct DictionaryRef { struct ObjectRef<const __CFDictionary *> { struct __CFDictionary *mCFObject; } mObject; } m_config_info; BOOL m_process_is_rosetta_translated; } _context;
}

@property (readonly, nonatomic) unsigned int operatingSystem;
@property (readonly, copy, nonatomic) NSString *operatingSystemReleaseType;
@property (readonly, nonatomic) BOOL runsOnInternalBuild;
@property (readonly, nonatomic) BOOL runsOnUIBuild;
@property (readonly, nonatomic) BOOL runsInSimulationMode;
@property (readonly, nonatomic) BOOL runsInAudioDSPManagerMode;
@property (readonly, nonatomic) BOOL runsInRosettaTranslatedProcess;
@property (readonly, copy, nonatomic) NSString *shortHardwareModelName;
@property (readonly, copy, nonatomic) NSString *tuningDirectoryPath;
@property (readonly, copy, nonatomic) NSString *temporaryDirectoryPath;
@property (readonly, nonatomic) unsigned int deviceClass;
@property (readonly, nonatomic) unsigned int productType;
@property (readonly, nonatomic) unsigned int acousticID;
@property (readonly, nonatomic) unsigned int hardwareLayoutID;

+ (unsigned int)findVPProductType:(unsigned int)a0;

- (unsigned int)deviceClass;
- (unsigned int)productType;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (unsigned int)operatingSystem;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)temporaryDirectoryPath;
- (unsigned int)acousticID;
- (unsigned int)hardwareLayoutID:(unsigned int)a0;
- (id)operatingSystemReleaseType;
- (BOOL)runsInAudioDSPManagerMode;
- (BOOL)runsInRosettaTranslatedProcess;
- (BOOL)runsInSimulationMode;
- (id)shortHardwareModelName;
- (id)tuningDirectoryPath;

@end
