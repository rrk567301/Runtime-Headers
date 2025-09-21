@class AFBBufferBuilder;

@interface _CHSExtensionIdentityBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct ExtensionIdentityBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (void)setDeviceIdentifier:(id)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setTokenString:(id)a0;

@end
