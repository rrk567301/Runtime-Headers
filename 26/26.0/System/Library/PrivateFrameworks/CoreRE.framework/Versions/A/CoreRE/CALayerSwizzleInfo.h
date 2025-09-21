@interface CALayerSwizzleInfo : NSObject {
    void *_component;
    struct SharedPtr<re::ecs2::Entity> { struct Entity *m_ref; } _ownEntity;
    int _identifier;
}

- (void)dealloc;
- (id)init;
- (void *)component;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setComponent:(void *)a0;
- (void *)ownEntity;
- (void)setOwnEntity:(void *)a0;

@end
