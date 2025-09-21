@class NSString;

@interface TMVolumeStore : TMStructure

@property (copy) NSString *name;
@property (copy) NSString *persistentUUID;
@property (readonly, copy) NSString *mountPoint;
@property (readonly, copy) NSString *volumeUUID;

+ (id)structureType;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)readAtURL:(id)a0 parent:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (char)isCaseSensitive;
- (id)volumeGroupUUID;
- (id)fstype;
- (char)setVolumeGroupUUID:(id)a0;
- (char)setVolumeRole:(id)a0;
- (id)volumeRole;

@end
