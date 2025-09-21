@class COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData, NSString, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData, NSMutableArray, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposure : PBCodable <NSCopying> {
    struct { unsigned char agedPersonalizationScore : 1; unsigned char agedUserFeedbackScore : 1; unsigned char autoSubscribeCtr : 1; unsigned char computedGlobalScoreCoefficient : 1; unsigned char diversifiedPersonalizationScore : 1; unsigned char featureCtr : 1; unsigned char globalScore : 1; unsigned char paidNonpaidSubscriptionCtr : 1; unsigned char personalizationScore : 1; unsigned char subscribedChannelCtr : 1; unsigned char userFeedbackScore : 1; unsigned char displayRank : 1; unsigned char groupType : 1; unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; unsigned char isPaidSubscriberToSourceChannel : 1; } _has;
}

@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData *issueData;
@property (readonly, nonatomic) char hasIssueExposureData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData *issueExposureData;
@property (readonly, nonatomic) char hasChannelData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData *channelData;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic) char hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) char hasAdSupportedChannel;
@property (nonatomic) char adSupportedChannel;
@property (nonatomic) char hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) char isPaidSubscriberToSourceChannel;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) char hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) char hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) char hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) char hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) char hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) char hasGlobalScore;
@property (nonatomic) double globalScore;
@property (nonatomic) char hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) char hasAgedUserFeedbackScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) char hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) char hasDiversifiedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) char hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;

+ (Class)fractionalCohortMembershipType;

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
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;

@end
