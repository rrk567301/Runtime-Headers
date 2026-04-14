@class NSArray, NSString, NSMutableArray;

@interface AVBBuiltInAVDECCController : AVBAVDECCController <AVB17221EntityDiscoveryDelegate, AVB17221AECPClient, TSgPTPNetworkPortClient> {
    NSMutableArray *_availableEntities;
}

@property (readonly) NSArray *availableEntities;
@property (nonatomic) BOOL maxTransitTimeTuningEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (Class)entityClass;
- (void)didChangeASCapable:(BOOL)a0 forPort:(id)a1;
- (void)removedEntity:(id)a0 onInterface:(id)a1;
- (id)_entityForEntityID:(unsigned long long)a0;
- (void)updatedEntity:(id)a0 onInterface:(id)a1;
- (void)addedEntity:(id)a0 onInterface:(id)a1;
- (void)didAddLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)controllerRequestToChangeEntity:(id)a0 toConfiguration:(unsigned short)a1 forTargetEntityID:(unsigned long long)a2;
- (void)didChangeEntity:(id)a0 toConfiguration:(unsigned short)a1 forTargetEntityID:(unsigned long long)a2;
- (void)controllerRequestToChangeEntity:(id)a0 descriptorOfType:(unsigned short)a1 withIndex:(unsigned short)a2 toStreamFormat:(id)a3 forTargetEntityID:(unsigned long long)a4;
- (void)didChangeEntity:(id)a0 descriptorOfType:(unsigned short)a1 withIndex:(unsigned short)a2 toStreamFormat:(id)a3 forTargetEntityID:(unsigned long long)a4;
- (void)controllerRequestToChangeEntity:(id)a0 setVideoClusterWithIndex:(unsigned short)a1 toFormatSpecific:(id)a2 aspectRatio:(id)a3 colorSpace:(unsigned short)a4 andFrameSize:(id)a5 forTargetEntityID:(unsigned long long)a6;
- (void)didChangeEntity:(id)a0 setVideoClusterWithIndex:(unsigned short)a1 toFormatSpecific:(id)a2 aspectRatio:(id)a3 colorSpace:(unsigned short)a4 andFrameSize:(id)a5 forTargetEntityID:(unsigned long long)a6;
- (void)controllerRequestToChangeEntity:(id)a0 descriptorOfType:(unsigned short)a1 withIndex:(unsigned short)a2 configurationIndex:(unsigned short)a3 nameIndex:(unsigned short)a4 toName:(id)a5 forTargetEntityID:(unsigned long long)a6;
- (void)didChangeEntity:(id)a0 descriptorOfType:(unsigned short)a1 withIndex:(unsigned short)a2 configurationIndex:(unsigned short)a3 nameIndex:(unsigned short)a4 toName:(id)a5 forTargetEntityID:(unsigned long long)a6;
- (void)controllerRequestToChangeEntity:(id)a0 toAssociationID:(unsigned long long)a1 forTargetEntityID:(unsigned long long)a2;
- (void)didChangeEntity:(id)a0 toAssociationID:(unsigned long long)a1 forTargetEntityID:(unsigned long long)a2;
- (void)controllerRequestToChangeEntity:(id)a0 audioUnitWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)controllerRequestToChangeEntity:(id)a0 videoClusterWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)controllerRequestToChangeEntity:(id)a0 sensorClusterWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didChangeEntity:(id)a0 audioUnitWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didChangeEntity:(id)a0 videoClusterWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didChangeEntity:(id)a0 sensorClusterWithIndex:(unsigned short)a1 toSamplingRate:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)controllerRequestToChangeEntity:(id)a0 clockDomainWithIndex:(unsigned short)a1 toClockSourceWithIndex:(unsigned short)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didChangeEntity:(id)a0 clockDomainWithIndex:(unsigned short)a1 toClockSourceWithIndex:(unsigned short)a2 forTargetEntityID:(unsigned long long)a3;
- (void)controllerRequestToChangeEntity:(id)a0 controlWithIndex:(unsigned short)a1 toValue:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didChangeEntity:(id)a0 controlWithIndex:(unsigned short)a1 toValue:(id)a2 forTargetEntityID:(unsigned long long)a3;
- (void)didRemoveLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)didRediscoverLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)didUpdateLocalEntity:(id)a0 changedProperties:(unsigned long long)a1 on17221EntityDiscovery:(id)a2;
- (void)didAddLinkLayerPort:(id)a0 onInterface:(id)a1;
- (void)didRemoveLinkLayerPort:(id)a0 onInterface:(id)a1;
- (BOOL)respectGeneralControllerIgnoreForEntity:(id)a0;
- (void)overridesForEntity:(id)a0;
- (BOOL)entityIsSupported:(id)a0;
- (void)addAvailableEntity:(id)a0;
- (void)removeAvailableEntity:(id)a0;
- (BOOL)entityShouldBeIgnored:(id)a0;
- (BOOL)timeSyncRequired;
- (void)addedEntityToDomain:(id)a0;
- (void)removedEntityFromDomain:(id)a0;
- (id)bestAudioMatchForStreamFormat:(id)a0 inStreamFormats:(id)a1 withSamplingRate:(id)a2;
- (id)availableEntities;
- (BOOL)connectEntityWithEntityID:(unsigned long long)a0;
- (BOOL)disconnectEntityWithEntityID:(unsigned long long)a0;

@end
