@class MCContainerSerializer, MPTransition;

@interface MPLayerSerializer : MPLayer {
    MCContainerSerializer *_layerSerializer;
    MPTransition *_introTransition;
}

- (id)container;
- (id)description;
- (void)dealloc;
- (void)insertEffectContainers:(id)a0 atIndex:(long long)a1;
- (id)introTransition;
- (void)moveEffectContainersFromIndices:(id)a0 toIndex:(long long)a1;
- (void)removeEffectContainersAtIndices:(id)a0;
- (void)setAudioPlaylist:(id)a0;
- (void)setIntroTransition:(id)a0;
- (void)setLayerSerializer:(id)a0;

@end
