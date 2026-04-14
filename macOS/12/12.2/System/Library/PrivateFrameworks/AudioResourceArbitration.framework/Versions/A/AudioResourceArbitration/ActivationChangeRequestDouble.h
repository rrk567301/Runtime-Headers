@class NSString;

@interface ActivationChangeRequestDouble : NSObject <dspd_ActivationChangeRequest>

@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } category;
@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } mode;
@property (nonatomic) struct vector<dspd::PortDescription, std::allocator<dspd::PortDescription>> { struct PortDescription *__begin_; struct PortDescription *__end_; struct __compressed_pair<dspd::PortDescription *, std::allocator<dspd::PortDescription>> { struct PortDescription *__value_; } __end_cap_; } portDescriptions;
@property (nonatomic) struct vector<dspd::DeviceDescription, std::allocator<dspd::DeviceDescription>> { struct DeviceDescription *__begin_; struct DeviceDescription *__end_; struct __compressed_pair<dspd::DeviceDescription *, std::allocator<dspd::DeviceDescription>> { struct DeviceDescription *__value_; } __end_cap_; } deviceDescriptions;
@property (nonatomic) struct vector<dspd::StreamDescription, std::allocator<dspd::StreamDescription>> { struct StreamDescription *__begin_; struct StreamDescription *__end_; struct __compressed_pair<dspd::StreamDescription *, std::allocator<dspd::StreamDescription>> { struct StreamDescription *__value_; } __end_cap_; } streamDescriptions;
@property (nonatomic) struct vector<dspd::IOControllerDescription, std::allocator<dspd::IOControllerDescription>> { struct IOControllerDescription *__begin_; struct IOControllerDescription *__end_; struct __compressed_pair<dspd::IOControllerDescription *, std::allocator<dspd::IOControllerDescription>> { struct IOControllerDescription *__value_; } __end_cap_; } ioControllerDescriptions;
@property (nonatomic) struct optional<aura::InitiationTriggerSpecification> { union { char __null_state_; struct InitiationTriggerSpecification { unsigned int mTrigger; struct optional<applesauce::CF::StringRef> { union { char __null_state_; struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } __val_; } ; BOOL __engaged_; } mInitiatingUID; struct optional<AVAudioSessionActivationAccessibilityPreference> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } mAccessibilityPreference; struct optional<AVAudioSessionActivationCallDirection> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } mCallDirection; } __val_; } ; BOOL __engaged_; } initiationTrigger;
@property (nonatomic) unsigned int session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init:(unsigned int)a0;

@end
