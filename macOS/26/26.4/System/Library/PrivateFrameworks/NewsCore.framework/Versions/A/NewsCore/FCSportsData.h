@class NSString, NSArray, NSDate;

@interface FCSportsData : NSObject

@property (readonly, copy, nonatomic) NSString *UMCCanonicalID;
@property (readonly, copy, nonatomic) NSString *sportsPrimaryName;
@property (readonly, copy, nonatomic) NSString *sportsNameAbbreviation;
@property (readonly, copy, nonatomic) NSString *sportsSecondaryName;
@property (readonly, copy, nonatomic) NSString *sportsSecondaryShortName;
@property (readonly, copy, nonatomic) NSString *sportsFullName;
@property (readonly, copy, nonatomic) NSString *topLevelSportTagIdentifier;
@property (readonly, nonatomic) NSArray *topLevelGroupsTagIdentifiers;
@property (readonly, copy, nonatomic) NSString *sportsNickname;
@property (readonly, copy, nonatomic) NSString *sportsLocation;
@property (readonly, copy, nonatomic) NSString *sportsCountryCode;
@property (readonly, nonatomic) BOOL hideLocationInMasthead;
@property (readonly, nonatomic) unsigned long long sportsType;
@property (readonly, copy, nonatomic) NSString *sportsTypeDisplayName;
@property (readonly, copy, nonatomic) NSString *sportsTypePluralizedDisplayName;
@property (readonly, nonatomic) unsigned long long sportsLeagueType;
@property (readonly, copy, nonatomic) NSDate *sportsEventStartTime;
@property (readonly, nonatomic) unsigned long long sportsEventType;
@property (readonly, nonatomic) BOOL supportsLiveActivity;
@property (readonly, copy, nonatomic) NSString *standingDisplayName;
@property (readonly, copy, nonatomic) NSString *standingPluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *bracketDisplayName;
@property (readonly, copy, nonatomic) NSString *bracketPluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *scoreDisplayName;
@property (readonly, copy, nonatomic) NSString *scorePluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *scheduleDisplayName;
@property (readonly, copy, nonatomic) NSString *schedulePluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *highlightDisplayName;
@property (readonly, copy, nonatomic) NSString *highlightPluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *sportsEventDisplayName;
@property (readonly, copy, nonatomic) NSString *sportsEventPluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *athleteDisplayName;
@property (readonly, copy, nonatomic) NSString *athletePluralizedDisplayName;
@property (readonly, copy, nonatomic) NSString *primaryLiveActivityID;
@property (readonly, nonatomic) NSArray *secondaryLiveActivityIDs;
@property (readonly, copy, nonatomic) NSString *liveStreamVideoURLString;
@property (readonly, copy, nonatomic) NSString *liveStreamVideoStillImageURLString;
@property (readonly, copy, nonatomic) NSString *liveStreamVideoKicker;
@property (readonly, copy, nonatomic) NSString *liveStreamVideoTitle;
@property (readonly, copy, nonatomic) NSString *liveStreamVideoDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_inflateSportsDataFromJSONDictionary:(id)a0;

@end
