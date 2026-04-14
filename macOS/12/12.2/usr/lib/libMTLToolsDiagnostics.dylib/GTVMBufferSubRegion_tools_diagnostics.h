@class NSString, GTVMBuffer_tools_diagnostics;

@interface GTVMBufferSubRegion_tools_diagnostics : NSObject <GTVMBufferSubRegion> {
    GTVMBuffer_tools_diagnostics *_parent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithGTVMBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)GTGPUToolsData;

@end
