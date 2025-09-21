@interface AWDBTLEConnectionStats : PBCodable <NSCopying> {
    struct { unsigned char complete : 1; unsigned char dc0 : 1; unsigned char dc1 : 1; unsigned char dc2 : 1; unsigned char dc3 : 1; unsigned char dc4 : 1; unsigned char dc5 : 1; unsigned char peakOutage : 1; unsigned char start : 1; unsigned char totalDuration : 1; } _has;
}

@property (nonatomic) char hasStart;
@property (nonatomic) unsigned int start;
@property (nonatomic) char hasComplete;
@property (nonatomic) unsigned int complete;
@property (nonatomic) char hasPeakOutage;
@property (nonatomic) unsigned int peakOutage;
@property (nonatomic) char hasTotalDuration;
@property (nonatomic) unsigned int totalDuration;
@property (nonatomic) char hasDc0;
@property (nonatomic) unsigned int dc0;
@property (nonatomic) char hasDc1;
@property (nonatomic) unsigned int dc1;
@property (nonatomic) char hasDc2;
@property (nonatomic) unsigned int dc2;
@property (nonatomic) char hasDc3;
@property (nonatomic) unsigned int dc3;
@property (nonatomic) char hasDc4;
@property (nonatomic) unsigned int dc4;
@property (nonatomic) char hasDc5;
@property (nonatomic) unsigned int dc5;

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
