@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char dataTypeCode : 1; unsigned char endTime : 1; unsigned char persistentID : 1; unsigned char seriesIndex : 1; unsigned char sourceID : 1; unsigned char startTime : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasPersistentID;
@property (nonatomic) long long persistentID;
@property (nonatomic) char hasDataTypeCode;
@property (nonatomic) long long dataTypeCode;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;
@property (nonatomic) char hasCount;
@property (nonatomic) long long count;
@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) char hasSourceID;
@property (nonatomic) long long sourceID;
@property (nonatomic) char hasSeriesIndex;
@property (nonatomic) long long seriesIndex;
@property (readonly, nonatomic) char hasQuantitySample;
@property (retain, nonatomic) NSData *quantitySample;

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
