@class NSString;

@interface ASDTExclavesStream : ASDTStream {
    struct unique_ptr<ASDT::Exclaves::NamedBuffer, std::default_delete<ASDT::Exclaves::NamedBuffer>> { struct __compressed_pair<ASDT::Exclaves::NamedBuffer *, std::default_delete<ASDT::Exclaves::NamedBuffer>> { struct NamedBuffer *__value_; } __ptr_; } _exclavesBuffer;
}

@property (nonatomic) unsigned int exclavesBufferSize;
@property (retain, nonatomic) NSString *exclavesBufferName;
@property (readonly, nonatomic) BOOL usesExclavesNamedBuffer;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id /* block */)readInputBlock;
- (BOOL)allocExclavesNamedBuffer:(unsigned int)a0;
- (void *)exclavesBuffer;
- (id /* block */)exclavesReadInput;
- (void)freeExclavesNamedBuffer;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (id)initWithDirection:(unsigned int)a0 withDevice:(id)a1;

@end
