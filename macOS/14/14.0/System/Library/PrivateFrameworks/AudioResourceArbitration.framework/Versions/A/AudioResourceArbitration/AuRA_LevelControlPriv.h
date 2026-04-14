@class NSString;

@interface AuRA_LevelControlPriv : AuRA_ControlPriv <AuRA_LevelControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLevelControl:(struct weak_ptr<aura::LevelControl> { struct LevelControl *x0; struct __shared_weak_count *x1; })a0;

@end
