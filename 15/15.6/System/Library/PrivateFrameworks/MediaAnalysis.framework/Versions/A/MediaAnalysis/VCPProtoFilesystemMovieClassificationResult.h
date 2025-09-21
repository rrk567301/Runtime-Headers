@interface VCPProtoFilesystemMovieClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _identifiers;
}

@property (nonatomic) float start;
@property (nonatomic) float duration;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (readonly, nonatomic) unsigned int *identifiers;

+ (id)resultFromLegacyDictionary:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIdentifier:(unsigned int)a0;
- (void)clearIdentifiers;
- (unsigned int)identifierAtIndex:(unsigned long long)a0;
- (id)exportToLegacyDictionary;
- (void)setIdentifiers:(unsigned int *)a0 count:(unsigned long long)a1;

@end
