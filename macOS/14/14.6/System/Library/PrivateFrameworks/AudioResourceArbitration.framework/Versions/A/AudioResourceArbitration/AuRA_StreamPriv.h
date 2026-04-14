@class NSString;

@interface AuRA_StreamPriv : AuRA_ObjectPriv <AuRA_Stream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)device;
- (unsigned int)index;
- (id)initWithStream:(struct weak_ptr<aura::Stream> { struct Stream *x0; struct __shared_weak_count *x1; })a0;
- (int)latency;
- (unsigned char)direction;
- (unsigned int)startingChannel;
- (id)ports;
- (id)privateFormat;
- (id)publicFormat;
- (BOOL)setPublicFormat:(id)a0 error:(id *)a1;
- (id)supportPrivateFormats;
- (id)supportPublicFormats;

@end
