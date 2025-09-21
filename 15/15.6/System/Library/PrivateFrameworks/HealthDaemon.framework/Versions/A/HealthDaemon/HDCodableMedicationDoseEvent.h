@class NSString, HDCodableSample, NSData;

@interface HDCodableMedicationDoseEvent : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char doseQuantity : 1; unsigned char logOrigin : 1; unsigned char scheduledDate : 1; unsigned char scheduledDoseQuantity : 1; unsigned char status : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasLogOrigin;
@property (nonatomic) long long logOrigin;
@property (readonly, nonatomic) char hasScheduleItemIdentifier;
@property (retain, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, nonatomic) char hasMedicationIdentifier;
@property (retain, nonatomic) NSString *medicationIdentifier;
@property (nonatomic) char hasScheduledDoseQuantity;
@property (nonatomic) double scheduledDoseQuantity;
@property (nonatomic) char hasDoseQuantity;
@property (nonatomic) double doseQuantity;
@property (nonatomic) char hasScheduledDate;
@property (nonatomic) double scheduledDate;
@property (nonatomic) char hasStatus;
@property (nonatomic) long long status;
@property (readonly, nonatomic) char hasMedicationUuid;
@property (retain, nonatomic) NSData *medicationUuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)applyToObject:(id)a0;
- (char)applyToObject:(id)a0 error:(out id *)a1;

@end
