@interface CALayerSwizzleInfo : NSObject {
    void *_component;
    struct SharedPtr<re::ecs2::Entity> { struct Entity *m_ref; } _ownEntity;
    int _identifier;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)component;
- (id)init;
- (void)dealloc;
- (void)setComponent:(void *)a0;
- (void *)ownEntity;
- (void)setOwnEntity:(void *)a0;

@end
