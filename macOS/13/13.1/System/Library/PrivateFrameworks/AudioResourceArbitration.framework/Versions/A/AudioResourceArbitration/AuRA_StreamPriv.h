@class NSString;

@interface AuRA_StreamPriv : AuRA_ObjectPriv <AuRA_Stream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)index;
- (id)device;
- (id)initWithStream:(struct weak_ptr<aura::Stream> { struct Stream *x0; struct __shared_weak_count *x1; })a0;
- (int)latency;
- (unsigned char)direction;
- (id)ports;
- (unsigned int)startingChannel;
- (id)privateFormat;
- (id)publicFormat;
- (BOOL)setPublicFormat:(id)a0 error:(id *)a1;
- (id)supportPrivateFormats;
- (id)supportPublicFormats;

@end
