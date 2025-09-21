@class NSString, NSMutableArray;

@interface ATXPBDigestOnboardingLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char timeTaken : 1; unsigned char digestOnboardingOutcome : 1; unsigned char entrySource : 1; unsigned char finalUIShown : 1; unsigned char didSelectShowMore : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) char hasEntrySource;
@property (nonatomic) int entrySource;
@property (nonatomic) char hasDigestOnboardingOutcome;
@property (nonatomic) int digestOnboardingOutcome;
@property (nonatomic) char hasFinalUIShown;
@property (nonatomic) int finalUIShown;
@property (nonatomic) char hasTimeTaken;
@property (nonatomic) double timeTaken;
@property (nonatomic) char hasDidSelectShowMore;
@property (nonatomic) char didSelectShowMore;
@property (retain, nonatomic) NSMutableArray *deliveryTimes;

+ (Class)deliveryTimesType;

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
- (int)StringAsDigestOnboardingOutcome:(id)a0;
- (int)StringAsEntrySource:(id)a0;
- (int)StringAsFinalUIShown:(id)a0;
- (void)addDeliveryTimes:(id)a0;
- (void)clearDeliveryTimes;
- (id)deliveryTimesAtIndex:(unsigned long long)a0;
- (unsigned long long)deliveryTimesCount;
- (id)digestOnboardingOutcomeAsString:(int)a0;
- (id)entrySourceAsString:(int)a0;
- (id)finalUIShownAsString:(int)a0;

@end
