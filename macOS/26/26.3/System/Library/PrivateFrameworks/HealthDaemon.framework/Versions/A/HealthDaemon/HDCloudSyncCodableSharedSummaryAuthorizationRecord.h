@class NSString, NSMutableArray;

@interface HDCloudSyncCodableSharedSummaryAuthorizationRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;

+ (Class)authorizationCategoriesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (void)addAuthorizationCategories:(id)a0;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;

@end
