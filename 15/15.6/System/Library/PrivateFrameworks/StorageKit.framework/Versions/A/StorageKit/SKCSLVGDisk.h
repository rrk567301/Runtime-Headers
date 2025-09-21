@class NSString, NSArray;

@interface SKCSLVGDisk : SKDisk

@property (retain) NSString *csLVGUUID;
@property (retain) NSArray *csPVChildrenUUIDs;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)children;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (id)physicalVolumes;
- (void)addChildVolumeToEmptyLVGWithProgress:(id /* block */)a0 completetionBlock:(id /* block */)a1;
- (char)canResize;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)matchesDictionary:(id)a0;

@end
