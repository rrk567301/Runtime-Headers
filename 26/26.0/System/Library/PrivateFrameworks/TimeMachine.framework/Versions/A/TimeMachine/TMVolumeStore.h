@class NSString;

@interface TMVolumeStore : TMStructure

@property (copy) NSString *name;
@property (copy) NSString *persistentUUID;
@property (readonly, copy) NSString *mountPoint;
@property (readonly, copy) NSString *volumeUUID;

+ (id)structureType;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)readAtURL:(id)a0 parent:(id)a1 error:(id *)a2;

- (BOOL)isCaseSensitive;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)volumeGroupUUID;
- (id)fstype;
- (BOOL)setVolumeGroupUUID:(id)a0;
- (BOOL)setVolumeRole:(id)a0;
- (id)volumeRole;

@end
