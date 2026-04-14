@class __end_cap_, __end_;

@interface aura_AggregateDevice : NSObject <NSCopying>

@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } uid;
@property (nonatomic) struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } name;
@property (nonatomic) struct optional<applesauce::CF::StringRef> { union { char __null_state_; struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } __val_; } ; BOOL __engaged_; } masterSubdeviceUID;
@property (nonatomic) struct optional<applesauce::CF::StringRef> { union { char __null_state_; struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } __val_; } ; BOOL __engaged_; } clockDeviceUID;
@property (nonatomic, getter=isStacked) BOOL stacked;
@property (nonatomic) struct vector<aura_AggregateSubdevice *, std::allocator<aura_AggregateSubdevice *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_AggregateSubdevice *__strong *, std::allocator<aura_AggregateSubdevice *>> { id *__value_; } x1; } subdevices;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
