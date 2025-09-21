@class NSString, HDCodableSample;

@interface HDCodablePauseRingsSchedule : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char endDateIndex : 1; unsigned char startDateIndex : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasStartDateIndex;
@property (nonatomic) long long startDateIndex;
@property (nonatomic) char hasEndDateIndex;
@property (nonatomic) long long endDateIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)applyToObject:(id)a0;

@end
