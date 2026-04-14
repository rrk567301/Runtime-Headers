@class NSString, NSMutableArray, PeopleSuggesterTrialIdentifier;

@interface PeopleSuggesterShareEvent : PBCodable <NSCopying> {
    struct { unsigned char appSharedFrom : 1; unsigned char madResponseStatus : 1; unsigned char version : 1; unsigned char isFallbackFetch : 1; unsigned char isSharePlayAvailable : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL hasTrialIdentifier;
@property (retain, nonatomic) PeopleSuggesterTrialIdentifier *trialIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *candidates;
@property (readonly, nonatomic) BOOL hasTestKey;
@property (retain, nonatomic) NSString *testKey;
@property (nonatomic) BOOL hasMadResponseStatus;
@property (nonatomic) int madResponseStatus;
@property (nonatomic) BOOL hasIsFallbackFetch;
@property (nonatomic) BOOL isFallbackFetch;
@property (nonatomic) BOOL hasIsSharePlayAvailable;
@property (nonatomic) BOOL isSharePlayAvailable;
@property (nonatomic) BOOL hasAppSharedFrom;
@property (nonatomic) int appSharedFrom;
@property (retain, nonatomic) NSMutableArray *feedbackEvents;

+ (Class)candidatesType;
+ (Class)feedbackEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (int)StringAsAppSharedFrom:(id)a0;
- (int)StringAsMadResponseStatus:(id)a0;
- (void)addCandidates:(id)a0;
- (void)addFeedbackEvents:(id)a0;
- (id)appSharedFromAsString:(int)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)clearFeedbackEvents;
- (id)feedbackEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackEventsCount;
- (id)madResponseStatusAsString:(int)a0;

@end
