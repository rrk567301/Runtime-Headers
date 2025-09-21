@class GEORPFeedbackAddressFields, PBUnknownFields;

@interface GEORPGroundViewCorrections : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackAddressFields *_addressToCensor;
    int _correctionType;
    struct { unsigned char has_correctionType : 1; } _flags;
}

@property (nonatomic) char hasCorrectionType;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) char hasAddressToCensor;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressToCensor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCorrectionType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)correctionTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
