@class NSString;

@interface SKAPFSContainerDisk : SKDisk

@property (retain) NSString *designatedPSUUID;
@property char isFusion;
@property (readonly) NSString *apfsUUID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)volumes;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (void)addDataVolumeWithName:(id)a0 systemVolume:(id)a1 caseSensitive:(char)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addSystemVolumeWithName:(id)a0 dataVolume:(id)a1 caseSensitive:(char)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addUnencryptedSystemVolumeWithName:(id)a0 dataVolume:(id)a1 caseSensitive:(char)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addVolumeWithName:(id)a0 caseSensitive:(char)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 passwordHint:(id)a5 apfsRole:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addVolumeWithName:(id)a0 caseSensitive:(char)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 passwordHint:(id)a5 progressBlock:(id /* block */)a6 completetionBlock:(id /* block */)a7;
- (void)addVolumeWithName:(id)a0 caseSensitive:(char)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 progressBlock:(id /* block */)a5 completetionBlock:(id /* block */)a6;
- (id)copyVolumesWithIncludeSnapshots:(char)a0;
- (void)createAPFSVolumeGroupWithDisks:(id)a0 completetionBlock:(id /* block */)a1;
- (id)designatedPhysicalStore;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)isVirtualDiskType;
- (id)physicalStores;
- (void)removeAPFSVolumeGroup:(id)a0 completetionBlock:(id /* block */)a1;
- (void)removeContainerWithProgressBlock:(id /* block */)a0 completetionBlock:(id /* block */)a1;
- (id)volumesExcludingSnapshots;

@end
