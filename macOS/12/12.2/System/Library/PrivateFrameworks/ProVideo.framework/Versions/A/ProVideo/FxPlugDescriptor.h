@interface FxPlugDescriptor : NSObject {
    struct FxPlugDescriptorPriv { id x0; id x1; } *_priv;
}

+ (id)fxPlugDescriptorWithPROPlugIn:(void *)a0;
+ (id)fxPlugDescriptorWithFxMetaPlug:(id)a0;

- (void)dealloc;
- (id)uuid;
- (id)version;
- (id)displayName;
- (id)properties;
- (id)flavor;
- (Class)plugInClass;
- (id)initWithPROPlugIn:(void *)a0;
- (id)initWithFxMetaPlug:(id)a0;
- (id)plugInTypeUUID;
- (id)metaPlug;
- (id)groupDescriptor;
- (BOOL)canDoGPU;
- (BOOL)requiresCoreImage;

@end
