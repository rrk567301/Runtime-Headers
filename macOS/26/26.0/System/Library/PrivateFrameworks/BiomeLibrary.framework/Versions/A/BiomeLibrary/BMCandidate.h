@class NSString, BMFeatureDouble;

@interface BMCandidate : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int feedbackDeprecated;
@property (readonly, nonatomic) double deprecatedField1;
@property (nonatomic) BOOL hasDeprecatedField1;
@property (readonly, nonatomic) double deprecatedField2;
@property (nonatomic) BOOL hasDeprecatedField2;
@property (readonly, nonatomic) double deprecatedField3;
@property (nonatomic) BOOL hasDeprecatedField3;
@property (readonly, nonatomic) NSString *privatizedIdentifier;
@property (readonly, nonatomic) NSString *privatizedTransportBundleId;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastOutgoingInteraction;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceOutgoingInteractionNumber10;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastIncomingInteraction;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesFromCurrentAppWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfTopDomainURLWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfDetectedPeopleWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfPeopleInPhotoWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfOutgoingInteractionsWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfIncomingInteractionsWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfInteractionsDuringTimePeriodWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfEngagedSuggestionsWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfEngagedSuggestionsFromCurrentAppWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfEngagedSuggestionsOfTopDomainURLWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfEngagedSuggestionsOfDetectedPeopleWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfEngagedSuggestionsOfPeopleInPhotoWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *hasEverSharePlayedWithConversation;
@property (readonly, nonatomic) int suggestedRank;
@property (nonatomic) BOOL hasSuggestedRank;
@property (readonly, nonatomic) double coreMLModelScore;
@property (nonatomic) BOOL hasCoreMLModelScore;
@property (readonly, nonatomic) int foundInChunk;
@property (nonatomic) BOOL hasFoundInChunk;
@property (readonly, nonatomic) int updatedInChunk;
@property (nonatomic) BOOL hasUpdatedInChunk;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfPeopleInPhotoIoUWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfPetsWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfPetsInCurrentPhotoWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfScenesInPhotoWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesOfDetectedScenesInPhotoWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfTopicsSharedWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfAppsSharedFromWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastPhotoShareWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *hasSharedSensitiveContentWIthConversation;
@property (readonly, nonatomic) BOOL isInPhoneCallWithConversation;
@property (nonatomic) BOOL hasIsInPhoneCallWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfSharesFromAlbumPhotoBelongsToWithConversation;
@property (readonly, nonatomic) BOOL isFirstPartyApp;
@property (nonatomic) BOOL hasIsFirstPartyApp;
@property (readonly, nonatomic) BMFeatureDouble *numberOfTimesSharedToTargetAppWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastShareWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastPhoneCallWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfDifferentFacesSharedWithConversation;
@property (readonly, nonatomic) BMFeatureDouble *numberOfTotalSharesToTargetApp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrivatizedIdentifier:(id)a0 feedbackDeprecated:(int)a1 privatizedTransportBundleId:(id)a2 timeSinceLastOutgoingInteraction:(id)a3 timeSinceOutgoingInteractionNumber10:(id)a4 timeSinceLastIncomingInteraction:(id)a5 deprecatedField1:(id)a6 deprecatedField2:(id)a7 deprecatedField3:(id)a8 numberOfSharesWithConversation:(id)a9 numberOfSharesFromCurrentAppWithConversation:(id)a10 numberOfSharesOfTopDomainURLWithConversation:(id)a11 numberOfSharesOfDetectedPeopleWithConversation:(id)a12 numberOfSharesOfPeopleInPhotoWithConversation:(id)a13 numberOfOutgoingInteractionsWithConversation:(id)a14 numberOfIncomingInteractionsWithConversation:(id)a15 numberOfInteractionsDuringTimePeriodWithConversation:(id)a16 numberOfEngagedSuggestionsWithConversation:(id)a17 numberOfEngagedSuggestionsFromCurrentAppWithConversation:(id)a18 numberOfEngagedSuggestionsOfTopDomainURLWithConversation:(id)a19 numberOfEngagedSuggestionsOfDetectedPeopleWithConversation:(id)a20 numberOfEngagedSuggestionsOfPeopleInPhotoWithConversation:(id)a21 hasEverSharePlayedWithConversation:(id)a22 suggestedRank:(id)a23 coreMLModelScore:(id)a24 foundInChunk:(id)a25 updatedInChunk:(id)a26 numberOfSharesOfPeopleInPhotoIoUWithConversation:(id)a27 numberOfSharesOfPetsWithConversation:(id)a28 numberOfSharesOfPetsInCurrentPhotoWithConversation:(id)a29 numberOfSharesOfScenesInPhotoWithConversation:(id)a30 numberOfSharesOfDetectedScenesInPhotoWithConversation:(id)a31 numberOfTopicsSharedWithConversation:(id)a32 numberOfAppsSharedFromWithConversation:(id)a33 timeSinceLastPhotoShareWithConversation:(id)a34 hasSharedSensitiveContentWIthConversation:(id)a35 isInPhoneCallWithConversation:(id)a36 numberOfSharesFromAlbumPhotoBelongsToWithConversation:(id)a37 isFirstPartyApp:(id)a38 numberOfTimesSharedToTargetAppWithConversation:(id)a39 timeSinceLastShareWithConversation:(id)a40 timeSinceLastPhoneCallWithConversation:(id)a41 numberOfDifferentFacesSharedWithConversation:(id)a42 numberOfTotalSharesToTargetApp:(id)a43;

@end
