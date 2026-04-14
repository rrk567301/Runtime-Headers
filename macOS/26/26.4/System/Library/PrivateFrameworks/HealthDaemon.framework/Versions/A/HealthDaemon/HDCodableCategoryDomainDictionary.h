@class NSString, NSMutableArray, HDCodableSyncIdentity;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

+ (Class)keyValuePairsType;

- (unsigned long long)keyValuePairsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearKeyValuePairs;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (void)writeTo:(id)a0;
- (long long)decodedCategory;
- (BOOL)_validateForInsertionWithError:(id *)a0;
- (id)initWithCategory:(long long)a0 domain:(id)a1;

@end
