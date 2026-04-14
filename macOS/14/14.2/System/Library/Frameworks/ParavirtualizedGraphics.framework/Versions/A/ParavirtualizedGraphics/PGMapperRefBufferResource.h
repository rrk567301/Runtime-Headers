@protocol MTLBufferSPI, PGTask_Resource;

@interface PGMapperRefBufferResource : PGResource {
    id<MTLBufferSPI> _buffer;
    unsigned long long _mappingID;
    id<PGTask_Resource> _task;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned long long x0; } *)a1 surface:(id)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
