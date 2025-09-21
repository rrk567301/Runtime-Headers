@class VFXAssetNode, VFXWorld, NSString;

@interface VFXAssetRegistry : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSSecureCoding> {
    VFXWorld *_world;
    VFXAssetNode *_root;
    unsigned char _isPresentationObject : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VFXAssetNode *rootNode;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setWorld:(id)a0;
- (void)addWorldReference:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)removeWorldReference:(id)a0;

@end
