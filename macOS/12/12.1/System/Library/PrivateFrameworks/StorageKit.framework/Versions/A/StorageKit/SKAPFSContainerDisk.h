@class NSString, NSArray;

@interface SKAPFSContainerDisk : SKDisk

@property (retain) NSString *apfsUUID;
@property BOOL isFusion;
@property (retain) NSArray *physicalStoreUUIDs;
@property (retain) NSArray *volumeUUIDs;
@property (retain) NSString *designatedPSUUID;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (void)addVolumeWithName:(id)a0 caseSensitive:(BOOL)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 passwordHint:(id)a5 progressBlock:(id /* block */)a6 completetionBlock:(id /* block */)a7;
- (id)physicalStores;
- (id)volumes;
- (id)volumesExcludingSnapshots;
- (id)designatedPhysicalStore;
- (void)addVolumeWithName:(id)a0 caseSensitive:(BOOL)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 progressBlock:(id /* block */)a5 completetionBlock:(id /* block */)a6;
- (void)addVolumeWithName:(id)a0 caseSensitive:(BOOL)a1 minSize:(unsigned long long)a2 maxSize:(unsigned long long)a3 password:(id)a4 passwordHint:(id)a5 apfsRole:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addSystemVolumeWithName:(id)a0 dataVolume:(id)a1 caseSensitive:(BOOL)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addUnencryptedSystemVolumeWithName:(id)a0 dataVolume:(id)a1 caseSensitive:(BOOL)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)addDataVolumeWithName:(id)a0 systemVolume:(id)a1 caseSensitive:(BOOL)a2 minSize:(unsigned long long)a3 maxSize:(unsigned long long)a4 password:(id)a5 passwordHint:(id)a6 progressBlock:(id /* block */)a7 completetionBlock:(id /* block */)a8;
- (void)removeContainerWithProgressBlock:(id /* block */)a0 completetionBlock:(id /* block */)a1;
- (void)createAPFSVolumeGroupWithDisks:(id)a0 completetionBlock:(id /* block */)a1;
- (void)removeAPFSVolumeGroup:(id)a0 completetionBlock:(id /* block */)a1;

@end
