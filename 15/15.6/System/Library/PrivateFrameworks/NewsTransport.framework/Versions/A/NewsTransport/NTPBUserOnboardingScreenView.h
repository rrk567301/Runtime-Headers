@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {
    struct { unsigned char channelPickerPresentationReason : 1; unsigned char countOfNotificationsSelected : 1; unsigned char onboardingScreenType : 1; unsigned char previouslyCompletedOnboardingOsVersion : 1; unsigned char userAction : 1; unsigned char fromPersonalizeNews : 1; } _has;
}

@property (nonatomic) char hasOnboardingScreenType;
@property (nonatomic) int onboardingScreenType;
@property (readonly, nonatomic) char hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (readonly, nonatomic) char hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (readonly, nonatomic) char hasUserActivityType;
@property (retain, nonatomic) NSString *userActivityType;
@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasCountOfNotificationsSelected;
@property (nonatomic) int countOfNotificationsSelected;
@property (nonatomic) char hasPreviouslyCompletedOnboardingOsVersion;
@property (nonatomic) int previouslyCompletedOnboardingOsVersion;
@property (nonatomic) char hasFromPersonalizeNews;
@property (nonatomic) char fromPersonalizeNews;
@property (nonatomic) char hasChannelPickerPresentationReason;
@property (nonatomic) int channelPickerPresentationReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsChannelPickerPresentationReason:(id)a0;
- (id)channelPickerPresentationReasonAsString:(int)a0;

@end
