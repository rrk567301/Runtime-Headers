@class NSString;
@protocol MTLDevice;

@interface GFX9AMD_MtlFunctionHandle : _MTLFunctionHandle {
    struct AMD_MtlFunctionHandleMemberRec { unsigned long long gpuAddress; } _amd;
}

@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;

- (void)dealloc;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2;

@end
