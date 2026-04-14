@class NSString, GTVMBuffer_replayer;

@interface GTVMBufferSubRegion_replayer : NSObject <GTVMBufferSubRegion> {
    GTVMBuffer_replayer *_parent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)GTGPUToolsData;
- (id)initWithGTVMBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
