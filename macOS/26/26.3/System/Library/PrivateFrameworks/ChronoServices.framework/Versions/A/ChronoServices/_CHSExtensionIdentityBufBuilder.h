@class AFBBufferBuilder;

@interface _CHSExtensionIdentityBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct ExtensionIdentityBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setExtensionBundleIdentifier:(id)a0;
- (id)init;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setTokenString:(id)a0;

@end
