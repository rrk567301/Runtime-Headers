@class NSData, NSString, _CPCoreSpotlightRankingSignalsForFeedback, _CPPunchoutForFeedback, _CPStruct, _CPPhotosAggregatedInfo, _CPMailRankingSignalsForFeedback, _CPMailResultDetailsForFeedback, _CPSafariAttributes, _CPPhotosAttributes, _CPCardForFeedback, _CPActionItemForFeedback;
@protocol NSCopying;

@interface _CPSearchResultForFeedback : PBCodable <_CPSearchResultForFeedback, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id<NSCopying> jsonIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonResultBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonSectionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int topHit;
@property (retain, nonatomic) _CPActionItemForFeedback *action;
@property (retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property (nonatomic) int type;
@property (retain, nonatomic) _CPStruct *localFeatures;
@property (copy, nonatomic) NSString *resultType;
@property (nonatomic) double rankingScore;
@property (nonatomic) char isStaticCorrection;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic) char isLocalApplicationResult;
@property (nonatomic) char publiclyIndexable;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *userInput;
@property (nonatomic) char isFuzzyMatch;
@property (nonatomic) char doNotFold;
@property (nonatomic) unsigned long long blockId;
@property (nonatomic) unsigned long long hashedIdentifier;
@property (copy, nonatomic) NSString *resultBundleId;
@property (nonatomic) int knownResultBundleId;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) int knownSectionBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic) int knownApplicationBundleIdentifier;
@property (copy, nonatomic) NSData *entityData;
@property (nonatomic) char shouldUseCompactDisplay;
@property (nonatomic) char noGoTakeover;
@property (nonatomic) char preferTopPlatter;
@property (nonatomic) char wasCompact;
@property (nonatomic) char didTakeoverGo;
@property (nonatomic) char usesCompactDisplay;
@property (nonatomic) char isInstantAnswer;
@property (nonatomic) char shouldAutoNavigate;
@property (retain, nonatomic) _CPCardForFeedback *card;
@property (retain, nonatomic) _CPCardForFeedback *inlineCard;
@property (retain, nonatomic) _CPCardForFeedback *compactCard;
@property (nonatomic) char containsPersonalResult;
@property (nonatomic) char didRerankPersonalResult;
@property (nonatomic) int coreSpotlightIndexUsed;
@property (nonatomic) int coreSpotlightIndexUsedReason;
@property (retain, nonatomic) _CPCoreSpotlightRankingSignalsForFeedback *coreSpotlightRankingSignals;
@property (retain, nonatomic) _CPMailRankingSignalsForFeedback *mailRankingSignals;
@property (retain, nonatomic) _CPMailResultDetailsForFeedback *mailResultDetails;
@property (nonatomic) char isVideoAssetFromPhotos;
@property (nonatomic) char isMailInstantAnswerUpdated;
@property (nonatomic) int indexOfSectionWhenRanked;
@property (nonatomic) int indexOfResultInSectionWhenRanked;
@property (retain, nonatomic) _CPSafariAttributes *safariAttributes;
@property (nonatomic) char hasAppTopHitShortcut;
@property (retain, nonatomic) _CPPhotosAttributes *photosAttributes;
@property (retain, nonatomic) _CPPhotosAggregatedInfo *photosAggregatedInfo;
@property (nonatomic) int thirdPartyQueryCompletionMatched;
@property (nonatomic) float thirdPartyNavigationIntentScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResultbundleidentifier;
@property (readonly, nonatomic) unsigned long long whichSectionbundleid;
@property (readonly, nonatomic) unsigned long long whichApplicationbundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearApplicationbundleid;
- (void)clearResultbundleidentifier;
- (void)clearSectionbundleid;
- (unsigned long long)typeForPQC;

@end
