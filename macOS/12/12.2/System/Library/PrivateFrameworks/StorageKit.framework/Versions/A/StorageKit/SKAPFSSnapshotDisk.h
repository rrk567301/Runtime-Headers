@class NSString;

@interface SKAPFSSnapshotDisk : SKAPFSDisk

@property (retain) NSString *snapshotName;
@property (retain) NSString *snapshotUUID;
@property long long sealStatus;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;

@end
