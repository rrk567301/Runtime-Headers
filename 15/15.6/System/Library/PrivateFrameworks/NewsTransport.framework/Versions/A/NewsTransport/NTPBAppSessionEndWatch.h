@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {
    struct { unsigned char watchAppSessionDuration : 1; } _has;
}

@property (nonatomic) char hasWatchAppSessionDuration;
@property (nonatomic) long long watchAppSessionDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
