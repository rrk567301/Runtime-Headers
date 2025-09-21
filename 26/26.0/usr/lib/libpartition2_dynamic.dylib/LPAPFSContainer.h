@class LPAPFSVolume;

@interface LPAPFSContainer : LPMedia

@property (readonly) LPAPFSVolume *prebootVolume;
@property (readonly) LPAPFSVolume *recoveryVolume;
@property (readonly) LPAPFSVolume *updateVolume;
@property (readonly) LPAPFSVolume *VMVolume;
@property (readonly) LPAPFSVolume *xARTVolume;
@property (readonly) LPAPFSVolume *hardwareVolume;

+ (id)supportedContentTypes;
+ (id)_containerWithPhysticalStoreRole:(int)a0;
+ (id)allAPFSContainers;
+ (id)diagsContainer;
+ (id)recoveryContainer;

- (id)volumes;
- (id)physicalStores;
- (id)_matchVolumesWithRole:(int)a0 group:(id)a1;
- (id)addVolumeWithName:(id)a0 role:(int)a1 caseSensitive:(BOOL)a2 reserveSize:(long long)a3 quotaSize:(long long)a4 pairedVolume:(id)a5 error:(id *)a6;
- (id)volumeWithRole:(int)a0 group:(id)a1;
- (id)volumesWithRole:(int)a0;
- (id)volumesWithRole:(int)a0 group:(id)a1;

@end
