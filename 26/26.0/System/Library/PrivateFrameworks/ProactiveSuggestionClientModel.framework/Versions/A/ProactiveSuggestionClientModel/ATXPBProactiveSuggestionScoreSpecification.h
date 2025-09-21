@interface ATXPBProactiveSuggestionScoreSpecification : PBCodable <NSCopying> {
    double _rawScore;
    int _suggestedConfidenceCategory;
    struct { unsigned char rawScore : 1; unsigned char suggestedConfidenceCategory : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
