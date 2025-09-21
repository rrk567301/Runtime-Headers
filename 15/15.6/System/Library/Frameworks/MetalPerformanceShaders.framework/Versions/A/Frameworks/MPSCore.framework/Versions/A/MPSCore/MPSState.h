@class NSString;
@protocol MTLResource;

@interface MPSState : NSObject {
    void *_resources;
    NSString *_label;
    unsigned short _flags;
    char _updatedAlready;
}

@property (readonly, nonatomic) unsigned long long resourceCount;
@property (nonatomic) unsigned long long readCount;
@property (readonly, nonatomic) char isTemporary;
@property (copy) NSString *label;
@property (readonly, retain, nonatomic) id<MTLResource> resource;

+ (id)temporaryStateWithCommandBuffer:(id)a0;
+ (id)temporaryStateWithCommandBuffer:(id)a0 bufferSize:(unsigned long long)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 resourceList:(id)a1;
+ (id)temporaryStateWithCommandBuffer:(id)a0 textureDescriptor:(id)a1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)a0;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (unsigned long long)resourceSize;
- (id)resourceAtIndex:(unsigned long long)a0 allocateMemory:(char)a1;
- (unsigned long long)bufferSizeAtIndex:(unsigned long long)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithDevice:(id)a0 bufferSize:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 resourceList:(id)a1;
- (id)initWithDevice:(id)a0 textureDescriptor:(id)a1;
- (id)initWithResources:(id)a0;
- (unsigned long long)resourceTypeAtIndex:(unsigned long long)a0;
- (struct MPSStateTextureInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7[4]; })textureInfoAtIndex:(unsigned long long)a0;

@end
