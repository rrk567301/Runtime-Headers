@interface PeopleSuggesterFeatureDouble : PBCodable <NSCopying> {
    struct { unsigned char value : 1; unsigned char defaultValue : 1; unsigned char wasImputed : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasWasImputed;
@property (nonatomic) BOOL wasImputed;
@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) BOOL defaultValue;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
