@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {
    struct { unsigned char watchAppSessionDuration : 1; } _has;
}

@property (nonatomic) BOOL hasWatchAppSessionDuration;
@property (nonatomic) long long watchAppSessionDuration;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
