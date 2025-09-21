@interface TPPBPeerStableInfoSetting : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasClock;
@property (nonatomic) unsigned long long clock;
@property (nonatomic) char hasValue;
@property (nonatomic) char value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
