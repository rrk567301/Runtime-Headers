@interface CALayerSwizzleInfo : NSObject {
    void *_component;
    struct SharedPtr<re::ecs2::Entity> { struct Entity *m_ref; } _ownEntity;
    int _identifier;
}

- (id)init;
- (void).cxx_destruct;
- (void *)component;
- (void)dealloc;
- (id).cxx_construct;
- (void)setComponent:(void *)a0;
- (void *)ownEntity;
- (void)setOwnEntity:(void *)a0;

@end
