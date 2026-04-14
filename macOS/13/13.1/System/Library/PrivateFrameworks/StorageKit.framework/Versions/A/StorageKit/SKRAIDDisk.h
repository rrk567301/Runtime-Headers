@class NSString, NSArray, NSDictionary, SKDisk;

@interface SKRAIDDisk : SKDisk

@property (retain) NSString *raidUUID;
@property BOOL isRAIDSet;
@property (retain) NSArray *setMemberUUIDs;
@property (retain) NSArray *setSpareUUIDs;
@property (retain) NSString *status;
@property (retain) NSDictionary *contentDiskDictionary;
@property (readonly, retain) SKDisk *contentDisk;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)matchesDictionary:(id)a0;
- (id)supportedFilesystems;
- (BOOL)canResize;
- (id)contentDiskIdentifier;
- (id)innerDescription;
- (BOOL)isVirtualDiskType;
- (void)addDisksToRAID:(id)a0 withType:(id)a1 progress:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)repairRAIDWithDisk:(id)a0 progress:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)removeDiskFromRAID:(id)a0 progress:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)deleteRAIDWithProgress:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end
