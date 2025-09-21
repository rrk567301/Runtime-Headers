@class NSString, NSData, NSMutableArray, HDCodableSample;

@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char final : 1; unsigned char frozen : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasFrozen;
@property (nonatomic) char frozen;
@property (readonly, nonatomic) char hasContinuationUUID;
@property (retain, nonatomic) NSData *continuationUUID;
@property (nonatomic) char hasFinal;
@property (nonatomic) char final;
@property (retain, nonatomic) NSMutableArray *locationDatas;

+ (Class)locationDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocationData:(id)a0;
- (char)applyToObject:(id)a0;
- (void)clearLocationDatas;
- (id)locationDataAtIndex:(unsigned long long)a0;
- (unsigned long long)locationDatasCount;

@end
