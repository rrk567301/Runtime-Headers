@class NSString, HDCodableSample, NSData;

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char completedDate : 1; unsigned char doubleValue : 1; unsigned char intValue : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) char hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) char hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasIntValue;
@property (nonatomic) long long intValue;
@property (readonly, nonatomic) char hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;

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
