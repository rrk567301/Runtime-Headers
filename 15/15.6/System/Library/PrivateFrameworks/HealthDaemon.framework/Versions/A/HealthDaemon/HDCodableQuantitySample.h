@class NSString, HDCodableSample, NSMutableArray;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char count : 1; unsigned char max : 1; unsigned char min : 1; unsigned char mostRecent : 1; unsigned char mostRecentDate : 1; unsigned char mostRecentDuration : 1; unsigned char valueInCanonicalUnit : 1; unsigned char valueInOriginalUnit : 1; unsigned char final : 1; unsigned char frozen : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasValueInCanonicalUnit;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) char hasValueInOriginalUnit;
@property (nonatomic) double valueInOriginalUnit;
@property (readonly, nonatomic) char hasOriginalUnitString;
@property (retain, nonatomic) NSString *originalUnitString;
@property (nonatomic) char hasFrozen;
@property (nonatomic) char frozen;
@property (nonatomic) char hasCount;
@property (nonatomic) long long count;
@property (nonatomic) char hasFinal;
@property (nonatomic) char final;
@property (nonatomic) char hasMin;
@property (nonatomic) double min;
@property (nonatomic) char hasMax;
@property (nonatomic) double max;
@property (nonatomic) char hasMostRecent;
@property (nonatomic) double mostRecent;
@property (nonatomic) char hasMostRecentDate;
@property (nonatomic) double mostRecentDate;
@property (retain, nonatomic) NSMutableArray *quantitySeriesDatas;
@property (nonatomic) char hasMostRecentDuration;
@property (nonatomic) double mostRecentDuration;

+ (Class)quantitySeriesDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addQuantitySeriesData:(id)a0;
- (char)applyToObject:(id)a0;
- (void)clearQuantitySeriesDatas;
- (char)isSeries;
- (id)quantitySeriesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)quantitySeriesDatasCount;

@end
