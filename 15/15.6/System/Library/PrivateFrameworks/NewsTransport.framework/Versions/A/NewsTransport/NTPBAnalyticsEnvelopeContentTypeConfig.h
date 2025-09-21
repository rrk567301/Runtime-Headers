@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {
    struct { unsigned char groupingTag : 1; unsigned char seedTime : 1; unsigned char samplingCeiling : 1; unsigned char samplingFloor : 1; } _has;
}

@property (readonly, nonatomic) char hasEndpointURLString;
@property (retain, nonatomic) NSString *endpointURLString;
@property (nonatomic) char hasSeedTime;
@property (nonatomic) unsigned long long seedTime;
@property (readonly, nonatomic) char hasContentHeaderName;
@property (retain, nonatomic) NSString *contentHeaderName;
@property (readonly, nonatomic) char hasContentHeaderValue;
@property (retain, nonatomic) NSString *contentHeaderValue;
@property (nonatomic) char hasSamplingFloor;
@property (nonatomic) unsigned int samplingFloor;
@property (nonatomic) char hasSamplingCeiling;
@property (nonatomic) unsigned int samplingCeiling;
@property (nonatomic) char hasGroupingTag;
@property (nonatomic) unsigned long long groupingTag;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
