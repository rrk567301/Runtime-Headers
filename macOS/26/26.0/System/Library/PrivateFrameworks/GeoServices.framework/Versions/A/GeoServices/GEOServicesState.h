@class NSString;

@interface GEOServicesState : PBCodable <NSCopying> {
    NSString *_bogusFieldForTestingPurposes;
}

@property (readonly, nonatomic) BOOL hasBogusFieldForTestingPurposes;
@property (retain, nonatomic) NSString *bogusFieldForTestingPurposes;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
