@class NSData, NSMutableArray;

@interface CKDPZoneChildrenRetrieveResponse : PBCodable <NSCopying> {
    struct { unsigned char isComplete : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *childrens;
@property (readonly, nonatomic) BOOL hasContinuationToken;
@property (retain, nonatomic) NSData *continuationToken;
@property (nonatomic) BOOL hasIsComplete;
@property (nonatomic) BOOL isComplete;

+ (Class)childrenType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addChildren:(id)a0;
- (id)childrenAtIndex:(unsigned long long)a0;
- (unsigned long long)childrensCount;
- (void)clearChildrens;

@end
