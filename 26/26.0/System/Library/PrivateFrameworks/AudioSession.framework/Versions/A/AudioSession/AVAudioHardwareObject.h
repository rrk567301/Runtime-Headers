@class NSString;

@interface AVAudioHardwareObject : NSObject {
    struct synchronized<std::shared_ptr<avas::client::HardwareObjectBase>, caulk::shared_ptr_mutex<avas::client::KVOMutex>, avas::client::unguarded_accessor<std::shared_ptr<avas::client::HardwareObjectBase>>> { struct shared_ptr_mutex<avas::client::KVOMutex> { struct shared_ptr<avas::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<avas::client::HardwareObjectBase> { struct HardwareObjectBase *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

@property (readonly, weak, nonatomic) AVAudioHardwareObject *owningObject;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) unsigned int standardObjectType;
@property (readonly, nonatomic) unsigned int objectType;

- (BOOL)isPropertySettable:(id)a0;
- (BOOL)hasProperty:(id)a0;
- (id)initWithImpl:(struct shared_ptr<avas::client::HardwareObjectBase> { struct HardwareObjectBase *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)KVOObservableKeys;
- (BOOL)setPropertyValue:(id)a0 forHardwareAddress:(id)a1 qualifier:(id)a2 controller:(id)a3 error:(id *)a4;
- (id)propertyValueForHardwareAddress:(id)a0 error:(id *)a1;
- (id)propertyValueForHardwareAddress:(id)a0 qualifier:(id)a1 error:(id *)a2;
- (BOOL)setName:(id)a0 controller:(id)a1 error:(id *)a2;
- (BOOL)setPropertyValue:(id)a0 forHardwareAddress:(id)a1 controller:(id)a2 error:(id *)a3;

@end
