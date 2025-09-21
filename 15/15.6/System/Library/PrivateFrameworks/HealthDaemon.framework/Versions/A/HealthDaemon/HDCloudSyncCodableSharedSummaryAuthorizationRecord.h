@class NSString, NSMutableArray;

@interface HDCloudSyncCodableSharedSummaryAuthorizationRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;

+ (Class)authorizationCategoriesType;

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
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;

@end
