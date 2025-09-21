@class NSString;

@interface MTLIGIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout <NSObject> {
    struct IGAccelIndirectArgumentBufferLayout { unsigned long long *x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned long long x5; struct IGArgumentElement **x6; } *_pIGIndirectArgumentBufferLayout;
    unsigned int argumentIndexCount;
    unsigned int argumentEncodeCount;
    unsigned int encodedLength;
    unsigned int encodedAlignment;
    unsigned long long encoderLayoutId;
    struct IGArgumentElement { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned char x0 : 2; unsigned char x1 : 1; unsigned char x2 : 1; } x4; } *arguments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (void)dumpLayoutData;
- (id)initWithStructType:(id)a0 device:(id)a1;

@end
