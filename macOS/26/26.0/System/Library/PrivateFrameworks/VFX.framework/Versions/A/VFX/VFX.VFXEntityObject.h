@class NSString, _TtC3VFX20EntityPropertyHelper;

@interface VFX.VFXEntityObject : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ referencedEntityManager;
    void /* unknown type, empty encoding */ localEntityManager;
    void /* unknown type, empty encoding */ _isTombstoned;
}

@property (nonatomic) BOOL isEnabled;
@property (nonatomic, readonly) BOOL doNotExport;
@property (nonatomic, readonly) _TtC3VFX20EntityPropertyHelper *properties;
@property (nonatomic, readonly) _TtC3VFX20EntityPropertyHelper *presentationProperties;
@property (nonatomic, weak) void /* function */ handle;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) id opaqueEntityManager;
@property (nonatomic, copy) NSString *tag;

- (void)dirty;
- (void)dealloc;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTo:(id)a0;
- (void)removeFromScene;
- (BOOL)checkAllEntityReferences;
- (void)fillRemapTable:(id)a0 copy:(id)a1;
- (id)init:(long long)a0 privateEntityManager:(id)a1;
- (id)init:(long long)a0 sharedEntityManager:(id)a1;
- (void)makeTextureLoadingSynchronous;
- (void)swapToNewEntity:(long long)a0 newScene:(id)a1;
- (void)updateVFXObjectReferences:(id)a0;

@end
