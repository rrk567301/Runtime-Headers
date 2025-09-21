@class NSString, NSURL, NSDate;

@interface BMAppActivity : BMEventBase <BMStoreData> {
    char _hasRaw_expirationDate;
    double _raw_expirationDate;
    NSString *_raw_itemRelatedContentURL;
    char _hasRaw_calendarUserActivityDate;
    double _raw_calendarUserActivityDate;
    char _hasRaw_calendarUserActivityEndDate;
    double _raw_calendarUserActivityEndDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) char beginningOfActivity;
@property (nonatomic) char hasBeginningOfActivity;
@property (readonly, nonatomic) NSString *contentDescription;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) char isEligibleForPrediction;
@property (nonatomic) char hasIsEligibleForPrediction;
@property (readonly, nonatomic) char isPubliclyIndexable;
@property (nonatomic) char hasIsPubliclyIndexable;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSURL *itemRelatedContentURL;
@property (readonly, nonatomic) NSString *itemRelatedUniqueIdentifier;
@property (readonly, nonatomic) int shortcutAvailability;
@property (nonatomic) char hasShortcutAvailability;
@property (readonly, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userActivityRequiredString;
@property (readonly, nonatomic) NSString *userActivityUUID;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *sourceItemID;
@property (readonly, nonatomic) NSString *sourceGroupID;
@property (readonly, nonatomic) NSDate *calendarUserActivityDate;
@property (readonly, nonatomic) NSString *calendarUserActivityExternalID;
@property (readonly, nonatomic) NSDate *calendarUserActivityEndDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)initWithBundleID:(id)a0 activityType:(id)a1 beginningOfActivity:(id)a2 contentDescription:(id)a3 expirationDate:(id)a4 isEligibleForPrediction:(id)a5 isPubliclyIndexable:(id)a6 itemIdentifier:(id)a7 itemRelatedContentURL:(id)a8 itemRelatedUniqueIdentifier:(id)a9 shortcutAvailability:(id)a10 suggestedInvocationPhrase:(id)a11 title:(id)a12 userActivityRequiredString:(id)a13 userActivityUUID:(id)a14 sourceID:(id)a15 sourceBundleID:(id)a16 sourceItemID:(id)a17 sourceGroupID:(id)a18 calendarUserActivityDate:(id)a19 calendarUserActivityExternalID:(id)a20 calendarUserActivityEndDate:(id)a21;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;

@end
