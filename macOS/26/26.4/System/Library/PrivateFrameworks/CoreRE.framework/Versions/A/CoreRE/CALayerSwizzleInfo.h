@interface CALayerSwizzleInfo : NSObject {
    void *_component;
    struct SharedPtr<re::ecs2::Entity> { struct Entity *m_ref; } _ownEntity;
    int _identifier;
}

- (void *)component;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)setComponent:(void *)a0;
- (void *)ownEntity;
- (void)setOwnEntity:(void *)a0;

@end
