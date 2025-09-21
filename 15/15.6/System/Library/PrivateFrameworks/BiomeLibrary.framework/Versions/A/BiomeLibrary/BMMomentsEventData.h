@class BMMomentsEventDataEventBundle, NSString, BMMomentsEventDataEvent, NSDate;

@interface BMMomentsEventData : BMEventBase <BMStoreData> {
    char _hasRaw_startDate;
    double _raw_startDate;
    char _hasRaw_endDate;
    double _raw_endDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMomentsEventDataEvent *event;
@property (readonly, nonatomic) BMMomentsEventDataEventBundle *bundle;
@property (readonly, nonatomic) char isBundle;
@property (nonatomic) char hasIsBundle;
@property (readonly, nonatomic) char IHAState;
@property (nonatomic) char hasIHAState;
@property (readonly, nonatomic) int age;
@property (nonatomic) char hasAge;
@property (readonly, nonatomic) int ageRange;
@property (readonly, nonatomic) int biologicalSex;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *categoryOfEvent;
@property (readonly, nonatomic) NSString *bundleInterface;
@property (readonly, nonatomic) NSString *bundleEvergreenType;
@property (readonly, nonatomic) NSString *sugSeetEngType;
@property (readonly, nonatomic) NSString *appEntryEngType;
@property (readonly, nonatomic) NSString *megaSignalTypeUsed;
@property (readonly, nonatomic) int viewVisibleSuggestionsCount;
@property (nonatomic) char hasViewVisibleSuggestionsCount;
@property (readonly, nonatomic) int viewTotalSuggestionsCount;
@property (nonatomic) char hasViewTotalSuggestionsCount;
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
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6;
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6 startDate:(id)a7 endDate:(id)a8 categoryOfEvent:(id)a9 bundleInterface:(id)a10 bundleEvergreenType:(id)a11 sugSeetEngType:(id)a12 appEntryEngType:(id)a13 megaSignalTypeUsed:(id)a14 viewVisibleSuggestionsCount:(id)a15 viewTotalSuggestionsCount:(id)a16;
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6 startDate:(id)a7 endDate:(id)a8 categoryOfEvent:(id)a9 bundleInterface:(id)a10 bundleEvergreenType:(id)a11 sugSeetEngType:(id)a12 appEntryEngType:(id)a13 megaSignalTypeUsed:(id)a14 viewVisibleSuggestionsCount:(id)a15 viewTotalSuggestionsCount:(id)a16 onboardingFlowCompletionState:(int)a17 isJournalAppInstalled:(id)a18 isJournalAppLocked:(id)a19 isJournalSuggestionSkipped:(id)a20 isActivitySettingsSwitchEnabled:(id)a21 isCommunicationSettingsSwitchEnabled:(id)a22 isSignificantLocationSettingsSwitchEnabled:(id)a23 isMediaSettingsSwitchEnabled:(id)a24 isNearbyPeopleSettingsSwitchEnabled:(id)a25 isPhotoSettingsSwitchEnabled:(id)a26 isStateOfMindSettingsSwitchEnabled:(id)a27 isReflectionSettingsSwitchEnabled:(id)a28 isBroadSystemLocationSettingsSwitchEnabled:(id)a29;

@end
