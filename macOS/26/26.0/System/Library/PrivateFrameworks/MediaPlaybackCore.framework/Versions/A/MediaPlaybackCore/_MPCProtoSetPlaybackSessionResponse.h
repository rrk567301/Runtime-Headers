@interface _MPCProtoSetPlaybackSessionResponse : PBCodable <NSCopying> {
    double _scheduledRateChangeTimestamp;
    struct { unsigned char scheduledRateChangeTimestamp : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
