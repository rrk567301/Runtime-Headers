@class NSString, NSMutableArray, HDCodableSyncIdentity;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasCategory;
@property (nonatomic) long long category;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

+ (Class)keyValuePairsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (unsigned long long)keyValuePairsCount;
- (char)_validateForInsertionWithError:(id *)a0;
- (long long)decodedCategory;
- (id)initWithCategory:(long long)a0 domain:(id)a1;

@end
