@class NSString;

@interface AuRA_IOStreamPriv : AuRA_ObjectPriv <AuRA_IOStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIOStream:(struct weak_ptr<aura::IOStream> { struct IOStream *x0; struct __shared_weak_count *x1; })a0;

@end
