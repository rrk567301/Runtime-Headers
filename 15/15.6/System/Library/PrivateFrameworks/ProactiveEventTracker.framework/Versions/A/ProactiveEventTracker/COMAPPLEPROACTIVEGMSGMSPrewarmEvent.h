@interface COMAPPLEPROACTIVEGMSGMSPrewarmEvent : PBCodable <NSCopying> {
    struct { unsigned char latencyMillis : 1; unsigned char version : 1; unsigned char outcome : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) char hasLatencyMillis;
@property (nonatomic) double latencyMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;

@end
