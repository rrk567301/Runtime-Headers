@class NSLocale, NSCalendar, NSDate;

@interface PLSearchSuggestionTemplateGenerator : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *todayDate;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)allPetTemplates;
+ (id)allAtTheSceneTemplates;
+ (id)allDateTemplates;
+ (id)allHolidayTemplates;
+ (id)allMeaningTemplates;
+ (id)allMiscellaneousTemplates;
+ (id)allPersonTemplates;
+ (id)allSceneTemplates;
+ (id)allSeasonTemplates;
+ (id)allTemplates;
+ (id)allTripTemplates;

- (void).cxx_destruct;

@end
