@class NSString;
@protocol MTLDevice;

@interface MTLToolsTextureViewPool : MTLToolsObject <MTLTextureViewPoolGGDSPI>

@property (readonly, nonatomic) struct MTLResourceID { unsigned long long x0; } baseResourceID;
@property (readonly, nonatomic) unsigned long long resourceViewCount;
@property (readonly) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct MTLResourceID { unsigned long long x0; })setTextureViewFromBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 atIndex:(unsigned long long)a4;
- (void)copyResourceStatesFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationLocation:(unsigned long long)a2;
- (struct MTLResourceID { unsigned long long x0; })copyResourceViewsFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationIndex:(unsigned long long)a2;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 atIndex:(unsigned long long)a1;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 descriptor:(id)a1 atIndex:(unsigned long long)a2;

@end
