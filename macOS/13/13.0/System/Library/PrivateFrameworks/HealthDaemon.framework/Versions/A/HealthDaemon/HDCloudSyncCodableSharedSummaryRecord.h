@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasPackage;
@property (retain, nonatomic) NSString *package;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasCompatibilityVersion;
@property (retain, nonatomic) NSString *compatibilityVersion;
@property (retain, nonatomic) NSMutableArray *objectTypeIdentifiers;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;
@property (readonly, nonatomic) BOOL hasSummaryData;
@property (retain, nonatomic) NSData *summaryData;

+ (Class)authorizationCategoriesType;
+ (Class)objectTypeIdentifiersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAuthorizationCategories;
- (void)addAuthorizationCategories:(id)a0;
- (unsigned long long)authorizationCategoriesCount;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (void)clearObjectTypeIdentifiers;
- (void)addObjectTypeIdentifiers:(id)a0;
- (unsigned long long)objectTypeIdentifiersCount;
- (id)objectTypeIdentifiersAtIndex:(unsigned long long)a0;

@end
