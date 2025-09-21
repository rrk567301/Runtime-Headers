@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBArticleTopic : PBCodable <NSCopying> {
    struct { unsigned char flowRate : 1; unsigned char ontologyLevel : 1; unsigned char quality : 1; unsigned char subscriptionRate : 1; unsigned char hardFollowRequiredForGrouping : 1; unsigned char isDisallowedFromGrouping : 1; unsigned char isEligibleForFoodGrouping : 1; unsigned char isEligibleForFoodGroupingIfAutofavorited : 1; unsigned char isEligibleForFoodGroupingIfFavorited : 1; unsigned char isEligibleForGrouping : 1; unsigned char isEligibleForGroupingIfAutofavorited : 1; unsigned char isEligibleForGroupingIfFavorited : 1; unsigned char isHidden : 1; unsigned char isManagedTopic : 1; unsigned char isManagedTopicWinner : 1; } _has;
}

@property (readonly, nonatomic) char hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) char hasCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic) char hasIsHidden;
@property (nonatomic) char isHidden;
@property (nonatomic) char hasIsEligibleForGrouping;
@property (nonatomic) char isEligibleForGrouping;
@property (nonatomic) char hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) char isEligibleForGroupingIfFavorited;
@property (readonly, nonatomic) char hasConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (nonatomic) char hasIsEligibleForGroupingIfAutofavorited;
@property (nonatomic) char isEligibleForGroupingIfAutofavorited;
@property (nonatomic) char hasIsManagedTopic;
@property (nonatomic) char isManagedTopic;
@property (nonatomic) char hasIsManagedTopicWinner;
@property (nonatomic) char isManagedTopicWinner;
@property (nonatomic) char hasFlowRate;
@property (nonatomic) double flowRate;
@property (nonatomic) char hasSubscriptionRate;
@property (nonatomic) double subscriptionRate;
@property (nonatomic) char hasQuality;
@property (nonatomic) double quality;
@property (nonatomic) char hasOntologyLevel;
@property (nonatomic) long long ontologyLevel;
@property (readonly, nonatomic) char hasContentAndRelevanceInfo;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo *contentAndRelevanceInfo;
@property (nonatomic) char hasIsDisallowedFromGrouping;
@property (nonatomic) char isDisallowedFromGrouping;
@property (nonatomic) char hasHardFollowRequiredForGrouping;
@property (nonatomic) char hardFollowRequiredForGrouping;
@property (nonatomic) char hasIsEligibleForFoodGrouping;
@property (nonatomic) char isEligibleForFoodGrouping;
@property (nonatomic) char hasIsEligibleForFoodGroupingIfFavorited;
@property (nonatomic) char isEligibleForFoodGroupingIfFavorited;
@property (nonatomic) char hasIsEligibleForFoodGroupingIfAutofavorited;
@property (nonatomic) char isEligibleForFoodGroupingIfAutofavorited;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
