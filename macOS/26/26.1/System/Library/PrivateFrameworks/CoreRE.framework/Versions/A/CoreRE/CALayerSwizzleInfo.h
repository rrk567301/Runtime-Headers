@interface CALayerSwizzleInfo : NSObject {
    void *_component;
    struct SharedPtr<re::ecs2::Entity> { struct Entity *m_ref; } _ownEntity;
    int _identifier;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void *)component;
- (id)init;
- (void)setComponent:(void *)a0;
- (void *)ownEntity;
- (void)setOwnEntity:(void *)a0;

@end
