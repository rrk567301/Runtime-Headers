@class NSString;

@interface SKCSPVDisk : SKDisk

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;

- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (id)logicalVolumeGroup;
- (BOOL)matchesDictionary:(id)a0;

@end
