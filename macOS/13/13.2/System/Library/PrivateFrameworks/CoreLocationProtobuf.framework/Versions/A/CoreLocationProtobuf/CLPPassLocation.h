@class NSString, NSMutableArray, CLPLocation;

@interface CLPPassLocation : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *passTypeId;
@property (retain, nonatomic) NSMutableArray *associatedStoreIds;
@property (nonatomic) int passSource;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;

+ (Class)associatedStoreIdType;

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
- (void)clearAssociatedStoreIds;
- (void)addAssociatedStoreId:(id)a0;
- (unsigned long long)associatedStoreIdsCount;
- (id)associatedStoreIdAtIndex:(unsigned long long)a0;

@end
