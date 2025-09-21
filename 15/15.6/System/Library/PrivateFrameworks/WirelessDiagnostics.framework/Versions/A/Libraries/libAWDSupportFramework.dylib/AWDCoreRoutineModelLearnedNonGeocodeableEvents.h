@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char learnedNongeocodableEvents : 1; unsigned char nongeocodableEvents : 1; unsigned char unlearnedNongeocodableEvents : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasUnlearnedNongeocodableEvents;
@property (nonatomic) int unlearnedNongeocodableEvents;
@property (nonatomic) char hasLearnedNongeocodableEvents;
@property (nonatomic) int learnedNongeocodableEvents;
@property (nonatomic) char hasNongeocodableEvents;
@property (nonatomic) int nongeocodableEvents;

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
