@class NSString, NSMutableArray, CLPLocation;

@interface CLPPassLocation : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *passTypeId;
@property (retain, nonatomic) NSMutableArray *associatedStoreIds;
@property (nonatomic) int passSource;
@property (nonatomic) char hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) char hasServerHash;
@property (nonatomic) int serverHash;

+ (Class)associatedStoreIdType;

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
- (void)addAssociatedStoreId:(id)a0;
- (id)associatedStoreIdAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedStoreIdsCount;
- (void)clearAssociatedStoreIds;

@end
