@class NSString, HDCodableSample, NSData;

@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char averageHeartRateInBPM : 1; unsigned char privateClassification : 1; unsigned char symptomsStatus : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasPrivateClassification;
@property (nonatomic) long long privateClassification;
@property (nonatomic) char hasAverageHeartRateInBPM;
@property (nonatomic) double averageHeartRateInBPM;
@property (readonly, nonatomic) char hasVoltagePayload;
@property (retain, nonatomic) NSData *voltagePayload;
@property (nonatomic) char hasSymptomsStatus;
@property (nonatomic) long long symptomsStatus;

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
