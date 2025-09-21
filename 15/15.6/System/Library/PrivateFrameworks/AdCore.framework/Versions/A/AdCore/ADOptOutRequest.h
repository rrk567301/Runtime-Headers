@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying> {
    struct { unsigned char statusChangeTimestamp : 1; unsigned char transmitTimestamp : 1; unsigned char timezone : 1; unsigned char optedOutStatus : 1; } _has;
}

@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic) char hasOptedOutStatus;
@property (nonatomic) char optedOutStatus;
@property (nonatomic) char hasTransmitTimestamp;
@property (nonatomic) double transmitTimestamp;
@property (nonatomic) char hasStatusChangeTimestamp;
@property (nonatomic) double statusChangeTimestamp;
@property (nonatomic) char hasTimezone;
@property (nonatomic) float timezone;
@property (readonly, nonatomic) char hasDPID;
@property (retain, nonatomic) NSData *dPID;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
