@class NSString;

@interface AuRA_ObjectPriv : NSObject <AuRA_Object> {
    struct weak_ptr<aura::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } _cppObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)initWithObject:(struct weak_ptr<aura::Object> { struct Object *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)manufacturerName;
- (unsigned long long)objectID;
- (id)modelName;
- (unsigned int)classID;
- (unsigned int)stockClassID;
- (BOOL)isFake;
- (struct weak_ptr<aura::BooleanControl> { struct BooleanControl *x0; struct __shared_weak_count *x1; })cppBooleanControl;
- (struct weak_ptr<aura::Box> { struct Box *x0; struct __shared_weak_count *x1; })cppBox;
- (struct weak_ptr<aura::Clock> { struct Clock *x0; struct __shared_weak_count *x1; })cppClock;
- (struct weak_ptr<aura::Control> { struct Control *x0; struct __shared_weak_count *x1; })cppControl;
- (struct weak_ptr<aura::Device> { struct Device *x0; struct __shared_weak_count *x1; })cppDevice;
- (struct weak_ptr<aura::Driver> { struct Driver *x0; struct __shared_weak_count *x1; })cppDriver;
- (struct weak_ptr<aura::IOController> { struct IOController *x0; struct __shared_weak_count *x1; })cppIOController;
- (struct weak_ptr<aura::IOStream> { struct IOStream *x0; struct __shared_weak_count *x1; })cppIOStream;
- (struct weak_ptr<aura::LevelControl> { struct LevelControl *x0; struct __shared_weak_count *x1; })cppLevelControl;
- (struct weak_ptr<aura::Object> { struct Object *x0; struct __shared_weak_count *x1; })cppObject;
- (struct weak_ptr<aura::Port> { struct Port *x0; struct __shared_weak_count *x1; })cppPort;
- (struct weak_ptr<aura::SelectorControl> { struct SelectorControl *x0; struct __shared_weak_count *x1; })cppSelectorControl;
- (struct weak_ptr<aura::SliderControl> { struct SliderControl *x0; struct __shared_weak_count *x1; })cppSliderControl;
- (struct weak_ptr<aura::StereoPanControl> { struct StereoPanControl *x0; struct __shared_weak_count *x1; })cppStereoPanControl;
- (struct weak_ptr<aura::Stream> { struct Stream *x0; struct __shared_weak_count *x1; })cppStream;
- (struct weak_ptr<aura::VirtualPort> { struct VirtualPort *x0; struct __shared_weak_count *x1; })cppVirtualPort;

@end
