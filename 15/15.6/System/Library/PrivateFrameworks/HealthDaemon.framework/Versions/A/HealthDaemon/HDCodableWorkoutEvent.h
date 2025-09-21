@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char duration : 1; unsigned char swimmingStrokeStyle : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasDate;
@property (nonatomic) double date;
@property (nonatomic) char hasSwimmingStrokeStyle;
@property (nonatomic) long long swimmingStrokeStyle;
@property (readonly, nonatomic) char hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;

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
- (id)decodedDateIntervalStartDate;

@end
