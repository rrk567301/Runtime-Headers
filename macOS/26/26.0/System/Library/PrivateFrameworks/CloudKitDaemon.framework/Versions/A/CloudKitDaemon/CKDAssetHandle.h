@class NSUUID, NSString, NSData, NSDate, NSNumber;

@interface CKDAssetHandle : CKObject

@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSDate *lastUsedTime;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSDate *modTime;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSNumber *chunkCount;
@property (retain, nonatomic) NSNumber *isCloned;
@property (retain, nonatomic) NSData *boundaryKeyHash;
@property (readonly, nonatomic) NSNumber *usesMMCSVersion2;

+ (id)descriptionWithStatus:(long long)a0;

- (id)statusDescription;
- (id)initWithPropertyDictionary:(id)a0;
- (id)CKPropertiesDescription;
- (BOOL)isEqualToAssetHandle:(id)a0 keys:(id)a1 optionalKeys:(id)a2 differencesDescription:(id *)a3;
- (BOOL)mayBeEvicted;
- (id)description;
- (BOOL)mayHaveAssetCacheManagedFile;
- (id)initWithItemID:(id)a0 UUID:(id)a1 path:(id)a2;
- (BOOL)shouldBeUnregisteredBeforeDeleted;
- (id)dictionaryPropertyEncoding;
- (BOOL)isEqualRevisionOfAssetHandle:(id)a0 differencesDescription:(id *)a1;
- (void).cxx_destruct;
- (void)setBoundaryKeyHashUsingBoundaryKey:(id)a0;

@end
