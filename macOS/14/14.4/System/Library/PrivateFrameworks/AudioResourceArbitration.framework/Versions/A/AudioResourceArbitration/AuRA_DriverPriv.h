@class NSString;

@interface AuRA_DriverPriv : AuRA_ObjectPriv <AuRA_Driver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDriver:(struct weak_ptr<aura::Driver> { struct Driver *x0; struct __shared_weak_count *x1; })a0;

@end
