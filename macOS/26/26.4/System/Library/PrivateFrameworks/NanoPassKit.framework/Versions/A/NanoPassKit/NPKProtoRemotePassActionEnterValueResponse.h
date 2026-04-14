@class NSString;

@interface NPKProtoRemotePassActionEnterValueResponse : PBCodable <NSCopying> {
    struct { unsigned char incrementAmount : 1; } _has;
}

@property (retain, nonatomic) NSString *requestUniqueID;
@property (nonatomic) int result;
@property (readonly, nonatomic) BOOL hasIncrementCurrency;
@property (retain, nonatomic) NSString *incrementCurrency;
@property (nonatomic) BOOL hasIncrementAmount;
@property (nonatomic) long long incrementAmount;

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
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;

@end
