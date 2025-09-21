@class NSString, NSArray, NSDictionary, SKDisk;

@interface SKRAIDDisk : SKDisk

@property (retain) NSString *raidUUID;
@property char isRAIDSet;
@property (retain) NSArray *setMemberUUIDs;
@property (retain) NSArray *setSpareUUIDs;
@property (retain) NSString *status;
@property (retain) NSDictionary *contentDiskDictionary;
@property (readonly, retain) SKDisk *contentDisk;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (id)representedDisk;
- (void)addDisksToRAID:(id)a0 withType:(id)a1 progress:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (char)canResize;
- (id)contentDiskIdentifier;
- (void)deleteRAIDWithProgress:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)isVirtualDiskType;
- (char)matchesDictionary:(id)a0;
- (void)removeDiskFromRAID:(id)a0 progress:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)repairRAIDWithDisk:(id)a0 progress:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)supportedFilesystems;

@end
