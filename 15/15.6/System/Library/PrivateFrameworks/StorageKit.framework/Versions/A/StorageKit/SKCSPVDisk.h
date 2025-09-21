@class NSString;

@interface SKCSPVDisk : SKDisk

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (char)canResize;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (id)logicalVolumeGroup;
- (char)matchesDictionary:(id)a0;

@end
