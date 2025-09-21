@interface PGHighlightsTitleSpecFactory : NSObject

+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(char)a0 allowAllCities:(char)a1;
+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)a0;
+ (id)specCollectionForMeaningLabel:(id)a0 allowAllCities:(char)a1;
+ (id)specPoolForAOILocation;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForGenericLocation:(char)a0;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(char)a0 allowAllCities:(char)a1;
+ (id)titleSpecForGenericLocation:(char)a0;
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(char)a0;

@end
