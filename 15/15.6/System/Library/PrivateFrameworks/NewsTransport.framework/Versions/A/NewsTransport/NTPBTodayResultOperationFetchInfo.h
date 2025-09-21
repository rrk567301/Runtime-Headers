@class NSString, NTPBTodayWidgetConfig, NSData;

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _userSegmentationSegmentSetIds;
    struct { long long *list; unsigned long long count; unsigned long long size; } _userSegmentationTreatmentIds;
    struct { unsigned char appConfigTreatmentIDInteger : 1; unsigned char cellularRadioAccessTechnology : 1; unsigned char onboardingVersion : 1; unsigned char reachabilityStatus : 1; unsigned char isBundleSubscriber : 1; unsigned char wifiReachable : 1; } _has;
}

@property (readonly, nonatomic) char hasTodaySourceIdentifier;
@property (retain, nonatomic) NSString *todaySourceIdentifier;
@property (nonatomic) char hasAppConfigTreatmentIDInteger;
@property (nonatomic) long long appConfigTreatmentIDInteger;
@property (readonly, nonatomic) char hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (readonly, nonatomic) char hasContentStoreFrontID;
@property (retain, nonatomic) NSString *contentStoreFrontID;
@property (nonatomic) char hasWifiReachable;
@property (nonatomic) char wifiReachable;
@property (nonatomic) char hasCellularRadioAccessTechnology;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) char hasReachabilityStatus;
@property (nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) char hasWidgetConfig;
@property (retain, nonatomic) NTPBTodayWidgetConfig *widgetConfig;
@property (nonatomic) char hasOnboardingVersion;
@property (nonatomic) long long onboardingVersion;
@property (readonly, nonatomic) char hasClickThroughRateByPersonalizationFeatureIDData;
@property (retain, nonatomic) NSData *clickThroughRateByPersonalizationFeatureIDData;
@property (readonly, nonatomic) char hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) unsigned long long userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) int *userSegmentationSegmentSetIds;
@property (readonly, nonatomic) unsigned long long userSegmentationTreatmentIdsCount;
@property (readonly, nonatomic) long long *userSegmentationTreatmentIds;
@property (nonatomic) char hasIsBundleSubscriber;
@property (nonatomic) char isBundleSubscriber;
@property (readonly, nonatomic) char hasBundleIap;
@property (retain, nonatomic) NSString *bundleIap;
@property (readonly, nonatomic) char hasContentEnvironment;
@property (retain, nonatomic) NSString *contentEnvironment;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUserSegmentationSegmentSetIds:(int)a0;
- (void)addUserSegmentationTreatmentIds:(long long)a0;
- (void)clearUserSegmentationSegmentSetIds;
- (void)clearUserSegmentationTreatmentIds;
- (void)setUserSegmentationSegmentSetIds:(int *)a0 count:(unsigned long long)a1;
- (void)setUserSegmentationTreatmentIds:(long long *)a0 count:(unsigned long long)a1;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)a0;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)a0;

@end
