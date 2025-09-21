@interface CPLAccountFlags : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char reason : 1; unsigned char defaultHEVC : 1; } _has;
}

@property (nonatomic) char hasDefaultHEVC;
@property (nonatomic) char defaultHEVC;
@property (nonatomic) char hasReason;
@property (nonatomic) int reason;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;

@end
