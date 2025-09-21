@class NSString, PeopleSuggesterTrialIdentifier, NSMutableArray, PeopleSuggesterFeatureDouble;

@interface PeopleSuggesterShareEvent : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _typeOfContents;
    struct { unsigned char appSharedFrom : 1; unsigned char madResponseStatus : 1; unsigned char version : 1; unsigned char isFallbackFetch : 1; unsigned char isInPhoneCall : 1; unsigned char isScreenShot : 1; unsigned char isSharePlayAvailable : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) char hasTrialIdentifier;
@property (retain, nonatomic) PeopleSuggesterTrialIdentifier *trialIdentifier;
@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *candidates;
@property (readonly, nonatomic) char hasTestKey;
@property (retain, nonatomic) NSString *testKey;
@property (nonatomic) char hasMadResponseStatus;
@property (nonatomic) int madResponseStatus;
@property (nonatomic) char hasIsFallbackFetch;
@property (nonatomic) char isFallbackFetch;
@property (nonatomic) char hasIsSharePlayAvailable;
@property (nonatomic) char isSharePlayAvailable;
@property (nonatomic) char hasAppSharedFrom;
@property (nonatomic) int appSharedFrom;
@property (retain, nonatomic) NSMutableArray *feedbackEvents;
@property (readonly, nonatomic) unsigned long long typeOfContentsCount;
@property (readonly, nonatomic) int *typeOfContents;
@property (nonatomic) char hasIsInPhoneCall;
@property (nonatomic) char isInPhoneCall;
@property (readonly, nonatomic) char hasTimeSinceLastShare;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *timeSinceLastShare;
@property (nonatomic) char hasIsScreenShot;
@property (nonatomic) char isScreenShot;
@property (retain, nonatomic) NSMutableArray *photoFeatures;

+ (Class)candidatesType;
+ (Class)feedbackEventsType;
+ (Class)photoFeaturesType;

- (void)dealloc;
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
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (int)StringAsAppSharedFrom:(id)a0;
- (int)StringAsMadResponseStatus:(id)a0;
- (int)StringAsTypeOfContents:(id)a0;
- (void)addCandidates:(id)a0;
- (void)addFeedbackEvents:(id)a0;
- (void)addPhotoFeatures:(id)a0;
- (void)addTypeOfContent:(int)a0;
- (id)appSharedFromAsString:(int)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)clearFeedbackEvents;
- (void)clearPhotoFeatures;
- (void)clearTypeOfContents;
- (id)feedbackEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackEventsCount;
- (id)madResponseStatusAsString:(int)a0;
- (id)photoFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)photoFeaturesCount;
- (void)setTypeOfContents:(int *)a0 count:(unsigned long long)a1;
- (int)typeOfContentAtIndex:(unsigned long long)a0;
- (id)typeOfContentsAsString:(int)a0;

@end
