@class NSString;

@interface BMPBHomeKitClientBase : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char homeOccupancy : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) char hasHomeUniqueIdentifier;
@property (retain, nonatomic) NSString *homeUniqueIdentifier;
@property (nonatomic) char hasHomeOccupancy;
@property (nonatomic) int homeOccupancy;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) char hasClientName;
@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) char hasEventCorrelationIdentifier;
@property (retain, nonatomic) NSString *eventCorrelationIdentifier;

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
