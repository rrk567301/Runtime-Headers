@class NSURL, NSMutableDictionary;

@interface SCNReferenceNode : SCNNode {
    NSURL *_referenceURL;
    BOOL _loaded;
    NSMutableDictionary *_overrides;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}

@property (copy, nonatomic) NSURL *referenceURL;
@property (nonatomic) long long loadingPolicy;
@property (readonly, getter=isLoaded) BOOL loaded;

+ (BOOL)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)load;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)unload;
- (id)_catalog;
- (id)overrides;
- (void)setOverrides:(id)a0;
- (BOOL)_isAReference;
- (BOOL)_isNameUnique:(id)a0;
- (void)_diffObject:(id)a0 with:(id)a1 path:(id)a2;
- (void)_diffNode:(id)a0 with:(id)a1 path:(id)a2;
- (void)removeAllOverrides;
- (id)_resolveURL;
- (id)_loadReferencedSceneWithURL:(id)a0 catalog:(id)a1;
- (void)_applyUnsharing:(id)a0 alreadyShared:(id)a1;
- (void)_applyOverride:(id)a0 forKeyPath:(id)a1;
- (void)_loadWithCatalog:(id)a0;
- (void)_loadWithURL:(id)a0 catalog:(id)a1;
- (void)_applyOverrides;
- (void)collectOverrides;
- (void)addOverride:(id)a0 forKeyPath:(id)a1;
- (void)removeForKeyPath:(id)a0;
- (void)setOverride:(id)a0 forKeyPath:(id)a1;
- (void)_loadWithURL:(id)a0;

@end
