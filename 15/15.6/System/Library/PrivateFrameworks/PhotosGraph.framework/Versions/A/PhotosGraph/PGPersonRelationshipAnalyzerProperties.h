@interface PGPersonRelationshipAnalyzerProperties : NSObject

@property (nonatomic) double familyHolidayAttendanceRatio;
@property (nonatomic) char hasParentContactName;
@property (nonatomic) char hasSameFamilyNameAsMePerson;
@property (nonatomic) unsigned long long numberOfMomentsAtHome;
@property (nonatomic) double ratioOfOfMomentsAtHome;
@property (nonatomic) char hasAnniversaryDate;
@property (nonatomic) char isTopTwoPersonSocialGroup;
@property (nonatomic) unsigned long long numberOfLoveEmojisExchanged;
@property (nonatomic) char isTopPerson;
@property (nonatomic) double friendNightOutAttendanceRatio;
@property (nonatomic) double oneOnOneTripAttendanceRatio;
@property (nonatomic) double tripAttendanceRatio;
@property (nonatomic) double weekendAppearanceRatio;
@property (nonatomic) double calendarEventAttendanceRatio;
@property (nonatomic) double momentsAtWorkAppearancesRatio;
@property (nonatomic) char personAgeDifferentThanMeNode;
@property (nonatomic) char personOldEnoughToBeMeNodeParentOrGrandparent;
@property (nonatomic) char personInferredToBeMeNodeChild;
@property (nonatomic) char personInferredToBeChild;
@property (readonly, nonatomic) double partnerScore;
@property (readonly, nonatomic) double familyScore;
@property (readonly, nonatomic) double parentScore;
@property (readonly, nonatomic) double childScore;
@property (readonly, nonatomic) double friendScore;
@property (readonly, nonatomic) double coworkerScore;
@property (readonly, nonatomic) char isInferredHighRecallChild;
@property (readonly, nonatomic) char isInferredHighRecallHouseholdMember;

- (id)description;
- (void)registerTopTwoPersonSocialGroup;
- (id)edgeProperties;
- (void)penalizePersonAgeCategoryDifferentThanMeNode;
- (void)penalizePersonScoresForChild;
- (void)registerAnniversaryDate;
- (void)registerAttendance:(unsigned long long)a0 amongFamilyHolidays:(unsigned long long)a1;
- (void)registerAttendance:(unsigned long long)a0 amongWorkCalendarEvents:(unsigned long long)a1;
- (void)registerNumberOfExchangedLoveEmojis:(unsigned long long)a0 amongExchangedLoveEmojis:(unsigned long long)a1;
- (void)registerNumberOfMomentsAtHome:(unsigned long long)a0 amongMomentsAtHome:(unsigned long long)a1;
- (void)registerNumberOfMomentsAtWork:(unsigned long long)a0 amongMomentsAtWork:(unsigned long long)a1;
- (void)registerNumberOfNightsOut:(unsigned long long)a0 amongNightsOut:(unsigned long long)a1;
- (void)registerNumberOfTrips:(unsigned long long)a0 withTripsScore:(double)a1 amongTrips:(unsigned long long)a2;
- (void)registerNumberOfWeekendMoments:(unsigned long long)a0 amongWeekends:(unsigned long long)a1;
- (void)registerOneOnOneTripAppearance:(unsigned long long)a0 amongOneOnOneTrips:(unsigned long long)a1;
- (void)registerParentContactName;
- (void)registerPersonAsMeNodeChild;
- (void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
- (void)registerSameFamilyNameAsMePerson;
- (void)registerTopPersonAmongTopPeople:(unsigned long long)a0;

@end
