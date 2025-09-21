@interface TVRMSTouchMessage : PBCodable <NSCopying> {
    struct { unsigned char direction : 1; unsigned char repeatCount : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) char hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) char hasRepeatCount;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

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
