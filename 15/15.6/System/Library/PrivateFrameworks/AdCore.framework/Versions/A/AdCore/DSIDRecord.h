@class NSString, NSMutableDictionary;

@interface DSIDRecord : NSObject <NSCopying> {
    char _dirty;
    int _nextReconcileTimestamp;
}

@property (retain, nonatomic) NSString *DSID;
@property (retain, nonatomic) NSString *iCloudDSID;
@property (nonatomic) char accountIsT13;
@property (nonatomic) char accountIsU13;
@property (nonatomic) char accountIsU18;
@property (nonatomic) char accountAgeUnknown;
@property (nonatomic) char sensitiveContentEligible;
@property (nonatomic) char isProtoU13;
@property (nonatomic) int effectiveBirthYear;
@property (nonatomic) int noiseAppliedVersion;
@property (nonatomic) char isDPIDManatee;
@property (nonatomic) char isDPIDLocal;
@property (nonatomic) int personalizedAdsTimestamp;
@property (retain, nonatomic) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (nonatomic) int deviceIDRotationTimestamp;
@property (retain, nonatomic) NSString *iAdIDBeforeReset;
@property (nonatomic) char isPlaceholderAccount;
@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic) long long lastJingleAccountStatus;
@property (nonatomic) char lastSentPersonalizedAdsStatus;
@property (nonatomic) int lastSentPersonalizedAdsTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) char dirty;
@property (nonatomic) char notificationRequired;
@property (readonly, nonatomic) char isActiveRecord;
@property (readonly, nonatomic) char isRestrictedByApple;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)encryptedIDForClientType:(long long)a0;
- (id)idAccountsDictionaryRepresentation;
- (id)idForClientType:(long long)a0;
- (id)initWithDSID:(id)a0 serializedRecord:(id)a1 version:(int)a2;
- (void)setID:(id)a0 forClientType:(long long)a1;
- (char)shouldSendNotification;
- (id)_parseItunesFlags;
- (char)iAdIDRecordsDirty;

@end
