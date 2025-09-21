@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {
    struct { unsigned char formatsExt1 : 1; unsigned char preferredFormat : 1; unsigned char preferredFormatExt1 : 1; } _has;
}

@property (nonatomic) int transport;
@property (nonatomic) int operation;
@property (nonatomic) unsigned int formats;
@property (nonatomic) char hasPreferredFormat;
@property (nonatomic) unsigned int preferredFormat;
@property (nonatomic) char hasFormatsExt1;
@property (nonatomic) unsigned int formatsExt1;
@property (nonatomic) char hasPreferredFormatExt1;
@property (nonatomic) unsigned int preferredFormatExt1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOperation:(id)a0;
- (id)operationAsString:(int)a0;
- (int)StringAsTransport:(id)a0;
- (id)transportAsString:(int)a0;

@end
