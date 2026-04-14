@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {
    struct { unsigned char completeFailReason : 1; unsigned char inputTokenLength : 1; unsigned char numFollowUp : 1; unsigned char outputTokenLength : 1; unsigned char regionEligibility : 1; unsigned char requestType : 1; unsigned char resultType : 1; unsigned char runErrorCode : 1; unsigned char runLatency : 1; unsigned char completed : 1; unsigned char didRunRemotely : 1; unsigned char isInvalidatedSystemAction : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (nonatomic) BOOL didRunRemotely;
@property (nonatomic) BOOL hasIsInvalidatedSystemAction;
@property (nonatomic) BOOL isInvalidatedSystemAction;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) BOOL hasExternalBundleIdentifier;
@property (retain, nonatomic) NSString *externalBundleIdentifier;
@property (readonly, nonatomic) BOOL hasExternalActionIdentifier;
@property (retain, nonatomic) NSString *externalActionIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutsId;
@property (retain, nonatomic) NSString *shortcutsId;
@property (nonatomic) BOOL hasCompleteFailReason;
@property (nonatomic) int completeFailReason;
@property (readonly, nonatomic) BOOL hasBaseModel;
@property (retain, nonatomic) NSString *baseModel;
@property (readonly, nonatomic) BOOL hasAdapterModel;
@property (retain, nonatomic) NSString *adapterModel;
@property (readonly, nonatomic) BOOL hasSafetyModel;
@property (retain, nonatomic) NSString *safetyModel;
@property (readonly, nonatomic) BOOL hasModelDestination;
@property (retain, nonatomic) NSString *modelDestination;
@property (readonly, nonatomic) BOOL hasRunErrorDomain;
@property (retain, nonatomic) NSString *runErrorDomain;
@property (nonatomic) BOOL hasRunErrorCode;
@property (nonatomic) int runErrorCode;
@property (nonatomic) BOOL hasRunLatency;
@property (nonatomic) float runLatency;
@property (nonatomic) BOOL hasInputTokenLength;
@property (nonatomic) unsigned int inputTokenLength;
@property (nonatomic) BOOL hasOutputTokenLength;
@property (nonatomic) unsigned int outputTokenLength;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRegionEligibility;
@property (nonatomic) int regionEligibility;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasNumFollowUp;
@property (nonatomic) unsigned int numFollowUp;

- (int)StringAsRequestType:(id)a0;
- (int)StringAsResultType:(id)a0;
- (id)requestTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)resultTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsCompleteFailReason:(id)a0;
- (int)StringAsRegionEligibility:(id)a0;
- (id)completeFailReasonAsString:(int)a0;
- (id)regionEligibilityAsString:(int)a0;

@end
