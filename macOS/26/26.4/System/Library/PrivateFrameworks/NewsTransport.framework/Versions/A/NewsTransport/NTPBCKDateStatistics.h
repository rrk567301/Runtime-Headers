@class NTPBCKDate;

@interface NTPBCKDateStatistics : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCreation;
@property (retain, nonatomic) NTPBCKDate *creation;
@property (readonly, nonatomic) BOOL hasModification;
@property (retain, nonatomic) NTPBCKDate *modification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
