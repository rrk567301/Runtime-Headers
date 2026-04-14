@class NSString, NSMutableArray, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)recordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearRecords;
- (void)addRecords:(id)a0;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:(unsigned long long)a0;

@end
