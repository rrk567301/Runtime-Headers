@class NSString;

@interface PPM2UnmappedMatchedFeedback : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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

@end
