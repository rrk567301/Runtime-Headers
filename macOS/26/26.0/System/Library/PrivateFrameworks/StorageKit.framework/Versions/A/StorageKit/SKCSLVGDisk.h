@class NSString, NSArray;

@interface SKCSLVGDisk : SKDisk

@property (retain) NSString *csLVGUUID;
@property (retain) NSArray *csPVChildrenUUIDs;

- (void)updateWithDictionary:(id)a0;
- (id)children;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)minimalDictionaryRepresentation;
- (id)physicalVolumes;
- (void)addChildVolumeToEmptyLVGWithProgress:(id /* block */)a0 completetionBlock:(id /* block */)a1;
- (BOOL)canResize;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)matchesDictionary:(id)a0;

@end
