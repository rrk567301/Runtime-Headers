@class NSString, NSArray;

@interface SKCSLVGDisk : SKDisk

@property (retain) NSString *csLVGUUID;
@property (retain) NSArray *csPVChildrenUUIDs;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)children;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)matchesDictionary:(id)a0;
- (BOOL)canResize;
- (id)innerDescription;
- (id)physicalVolumes;
- (void)addChildVolumeToEmptyLVGWithProgress:(id /* block */)a0 completetionBlock:(id /* block */)a1;

@end
