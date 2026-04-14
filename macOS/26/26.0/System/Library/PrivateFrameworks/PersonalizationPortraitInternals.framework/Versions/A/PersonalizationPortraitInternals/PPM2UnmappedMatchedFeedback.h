@class NSString;

@interface PPM2UnmappedMatchedFeedback : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
