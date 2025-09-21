@class NSString;
@protocol MTLDevice;

@interface _MTLTextureViewPool : _MTLResourceViewPool <MTLTextureViewPoolGGDSPI>

@property (readonly, nonatomic) struct MTLResourceID { unsigned long long x0; } baseResourceID;
@property (readonly, nonatomic) unsigned long long resourceViewCount;
@property (readonly) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct MTLResourceID { unsigned long long x0; })setTextureViewFromBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 atIndex:(unsigned long long)a4;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 atIndex:(unsigned long long)a1;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 descriptor:(id)a1 atIndex:(unsigned long long)a2;
- (struct MTLResourceID { unsigned long long x0; })setBufferView:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 atIndex:(unsigned long long)a4;

@end
