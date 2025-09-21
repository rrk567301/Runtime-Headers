@class NSString;
@protocol MTLDevice;

@interface _MTLResourceViewPool : _MTLObjectWithLabel <MTLResourceViewPoolGGDSPI> {
    struct MTLResourceID { unsigned long long _impl; } _baseResourceID;
    unsigned long long _resourceViewCount;
}

@property (readonly, nonatomic) struct MTLResourceID { unsigned long long x0; } baseResourceID;
@property (readonly, nonatomic) unsigned long long resourceViewCount;
@property (readonly) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)copyResourceStatesFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationLocation:(unsigned long long)a2;
- (struct MTLResourceID { unsigned long long x0; })copyResourceViewsFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationIndex:(unsigned long long)a2;
- (id)initWithDescriptor:(id)a0 device:(id)a1;

@end
