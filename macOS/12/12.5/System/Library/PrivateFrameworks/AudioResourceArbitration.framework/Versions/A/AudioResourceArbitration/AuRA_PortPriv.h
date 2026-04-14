@class NSString;

@interface AuRA_PortPriv : AuRA_ObjectPriv <AuRA_Port>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uid;
- (unsigned int)connectionType;
- (id)device;
- (unsigned char)direction;
- (unsigned int)portType;
- (id)initWithPort:(struct weak_ptr<aura::Port> { struct Port *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)endpointType;
- (id)streams;

@end
