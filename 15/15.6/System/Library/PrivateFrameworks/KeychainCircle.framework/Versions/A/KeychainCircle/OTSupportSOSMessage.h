@interface OTSupportSOSMessage : PBCodable <NSCopying> {
    struct { unsigned char supported : 1; } _has;
}

@property (nonatomic) char hasSupported;
@property (nonatomic) int supported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSupported:(id)a0;
- (id)supportedAsString:(int)a0;

@end
