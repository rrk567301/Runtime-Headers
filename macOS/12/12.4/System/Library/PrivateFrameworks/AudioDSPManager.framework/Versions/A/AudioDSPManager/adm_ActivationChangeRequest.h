@class NSString;

@interface adm_ActivationChangeRequest : adm_ConfigurationChangeRequest <adm_JSONSerializable, NSSecureCoding, dspd_ActivationChangeRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } category;
@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } mode;
@property (nonatomic) struct vector<dspd::PortDescription, std::allocator<dspd::PortDescription>> { struct PortDescription *__begin_; struct PortDescription *__end_; struct __compressed_pair<dspd::PortDescription *, std::allocator<dspd::PortDescription>> { struct PortDescription *__value_; } __end_cap_; } portDescriptions;
@property (nonatomic) struct vector<dspd::StreamDescription, std::allocator<dspd::StreamDescription>> { struct StreamDescription *__begin_; struct StreamDescription *__end_; struct __compressed_pair<dspd::StreamDescription *, std::allocator<dspd::StreamDescription>> { struct StreamDescription *__value_; } __end_cap_; } streamDescriptions;
@property (nonatomic) struct vector<dspd::DeviceDescription, std::allocator<dspd::DeviceDescription>> { struct DeviceDescription *__begin_; struct DeviceDescription *__end_; struct __compressed_pair<dspd::DeviceDescription *, std::allocator<dspd::DeviceDescription>> { struct DeviceDescription *__value_; } __end_cap_; } deviceDescriptions;
@property (nonatomic) struct vector<dspd::IOControllerDescription, std::allocator<dspd::IOControllerDescription>> { struct IOControllerDescription *__begin_; struct IOControllerDescription *__end_; struct __compressed_pair<dspd::IOControllerDescription *, std::allocator<dspd::IOControllerDescription>> { struct IOControllerDescription *__value_; } __end_cap_; } ioControllerDescriptions;
@property (nonatomic) struct optional<aura::InitiationTriggerSpecification> { union { char __null_state_; struct InitiationTriggerSpecification { unsigned int mTrigger; struct optional<applesauce::CF::StringRef> { union { char __null_state_; struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } __val_; } ; BOOL __engaged_; } mInitiatingUID; struct optional<AVAudioSessionActivationAccessibilityPreference> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } mAccessibilityPreference; struct optional<AVAudioSessionActivationCallDirection> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } mCallDirection; } __val_; } ; BOOL __engaged_; } initiationTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int session;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSession:(unsigned int)a0;
- (struct basic_json<map, vector, std::string, bool, long long, unsigned long long, double, allocator, adl_serializer, std::vector<unsigned char>> { unsigned char x0; union json_value { void *x0; void *x1; void *x2; void *x3; BOOL x4; long long x5; unsigned long long x6; double x7; } x1; })adm_toJSON;

@end
