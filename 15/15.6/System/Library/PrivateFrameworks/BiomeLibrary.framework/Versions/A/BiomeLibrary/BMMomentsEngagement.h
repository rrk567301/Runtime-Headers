@class BMMomentsEngagementSuggestionEvent, BMMomentsEngagementClientActivityEvent, BMMomentsEngagementAppEntryEvent, NSString;

@interface BMMomentsEngagement : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMomentsEngagementSuggestionEvent *suggestionEvent;
@property (readonly, nonatomic) BMMomentsEngagementAppEntryEvent *entryEvent;
@property (readonly, nonatomic) BMMomentsEngagementClientActivityEvent *clientActivityEvent;
@property (readonly, nonatomic) int onboardingFlowCompletionState;
@property (readonly, nonatomic) char isJournalAppInstalled;
@property (nonatomic) char hasIsJournalAppInstalled;
@property (readonly, nonatomic) char isJournalAppLocked;
@property (nonatomic) char hasIsJournalAppLocked;
@property (readonly, nonatomic) char isJournalSuggestionSkipped;
@property (nonatomic) char hasIsJournalSuggestionSkipped;
@property (readonly, nonatomic) char isActivitySettingsSwitchEnabled;
@property (nonatomic) char hasIsActivitySettingsSwitchEnabled;
@property (readonly, nonatomic) char isCommunicationSettingsSwitchEnabled;
@property (nonatomic) char hasIsCommunicationSettingsSwitchEnabled;
@property (readonly, nonatomic) char isSignificantLocationSettingsSwitchEnabled;
@property (nonatomic) char hasIsSignificantLocationSettingsSwitchEnabled;
@property (readonly, nonatomic) char isMediaSettingsSwitchEnabled;
@property (nonatomic) char hasIsMediaSettingsSwitchEnabled;
@property (readonly, nonatomic) char isNearbyPeopleSettingsSwitchEnabled;
@property (nonatomic) char hasIsNearbyPeopleSettingsSwitchEnabled;
@property (readonly, nonatomic) char isPhotoSettingsSwitchEnabled;
@property (nonatomic) char hasIsPhotoSettingsSwitchEnabled;
@property (readonly, nonatomic) char isStateOfMindSettingsSwitchEnabled;
@property (nonatomic) char hasIsStateOfMindSettingsSwitchEnabled;
@property (readonly, nonatomic) char isReflectionSettingsSwitchEnabled;
@property (nonatomic) char hasIsReflectionSettingsSwitchEnabled;
@property (readonly, nonatomic) char isBroadSystemLocationSettingsSwitchEnabled;
@property (nonatomic) char hasIsBroadSystemLocationSettingsSwitchEnabled;
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
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithSuggestionEvent:(id)a0 entryEvent:(id)a1 clientActivityEvent:(id)a2;
- (id)initWithSuggestionEvent:(id)a0 entryEvent:(id)a1 clientActivityEvent:(id)a2 onboardingFlowCompletionState:(int)a3 isJournalAppInstalled:(id)a4 isJournalAppLocked:(id)a5 isJournalSuggestionSkipped:(id)a6 isActivitySettingsSwitchEnabled:(id)a7 isCommunicationSettingsSwitchEnabled:(id)a8 isSignificantLocationSettingsSwitchEnabled:(id)a9 isMediaSettingsSwitchEnabled:(id)a10 isNearbyPeopleSettingsSwitchEnabled:(id)a11 isPhotoSettingsSwitchEnabled:(id)a12 isStateOfMindSettingsSwitchEnabled:(id)a13 isReflectionSettingsSwitchEnabled:(id)a14 isBroadSystemLocationSettingsSwitchEnabled:(id)a15;

@end
