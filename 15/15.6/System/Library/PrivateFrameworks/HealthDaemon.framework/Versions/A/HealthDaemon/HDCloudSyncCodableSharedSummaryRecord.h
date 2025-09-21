@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasPackage;
@property (retain, nonatomic) NSString *package;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) char hasCompatibilityVersion;
@property (retain, nonatomic) NSString *compatibilityVersion;
@property (retain, nonatomic) NSMutableArray *objectTypeIdentifiers;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;
@property (readonly, nonatomic) char hasSummaryData;
@property (retain, nonatomic) NSData *summaryData;

+ (Class)authorizationCategoriesType;
+ (Class)objectTypeIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (void)addAuthorizationCategories:(id)a0;
- (void)addObjectTypeIdentifiers:(id)a0;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;
- (void)clearObjectTypeIdentifiers;
- (id)objectTypeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)objectTypeIdentifiersCount;

@end
