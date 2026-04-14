@class NSString, REMResolutionTokenMap, NSData, NSDate, REMObjectID;

@interface REMBaseSectionStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentID;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (void)setMinimumSupportedVersion:(long long)a0;
- (unsigned long long)storeGeneration;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (BOOL)isUnsupported;
- (id)cdKeyToStorageKeyMap;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 parentID:(id)a2 displayName:(id)a3;

@end
