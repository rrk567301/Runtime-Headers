@interface COMAPPLEPROACTIVEGMSGMSPrewarmEvent : PBCodable <NSCopying> {
    struct { unsigned char latencyMillis : 1; unsigned char version : 1; unsigned char outcome : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasLatencyMillis;
@property (nonatomic) double latencyMillis;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;

@end
