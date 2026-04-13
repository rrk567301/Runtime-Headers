@class NSString;

@interface SKCSPVDisk : SKDisk

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)logicalVolumeGroup;

@end
