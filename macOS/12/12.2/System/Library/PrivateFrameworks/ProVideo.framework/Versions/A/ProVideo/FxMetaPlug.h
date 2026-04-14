@interface FxMetaPlug : NSObject <FxMetaPlug> {
    struct FxMetaPlugPriv { id x0; id x1; } *_priv;
}

+ (id)syntheticUUIDBasedOnString:(id)a0;
+ (id)fxMetaPlugWithWrapper:(id)a0 andData:(id)a1;
+ (id)syntheticUUIDBasedOnIndex:(int)a0;

- (void)dealloc;
- (id)data;
- (id)uuid;
- (id)wrapper;
- (id)version;
- (id)displayName;
- (id)groupUUID;
- (id)groupDisplayName;
- (id)fxPlugProperties;
- (id)initWithWrapper:(id)a0 andData:(id)a1;
- (id)versionDisplayName;
- (id)fxPlugDescriptor;

@end
