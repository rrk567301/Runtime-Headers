@class VFXPrefabAsset, NSString;

@interface VFXPrefab : NSObject <VFXReferenceEnumerable, VFXCopyingRemappable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXPrefabAsset *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefabWithAsset:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithAsset:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)reload:(id)a0 options:(unsigned long long)a1;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;

@end
