@class NSString, PBUnknownFields;

@interface GEOPDSearchEnrichmentCandidateMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_impressionId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
