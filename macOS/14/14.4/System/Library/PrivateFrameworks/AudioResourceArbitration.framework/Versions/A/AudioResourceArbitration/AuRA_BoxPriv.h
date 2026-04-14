@class NSString;

@interface AuRA_BoxPriv : AuRA_ObjectPriv <AuRA_Box>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBox:(struct weak_ptr<aura::Box> { struct Box *x0; struct __shared_weak_count *x1; })a0;

@end
