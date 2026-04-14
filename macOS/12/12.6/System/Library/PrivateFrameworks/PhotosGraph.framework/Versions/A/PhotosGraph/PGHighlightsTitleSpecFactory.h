@interface PGHighlightsTitleSpecFactory : NSObject

+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(BOOL)a0;
+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)a0;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForAOILocation;
+ (id)specPoolForGenericLocation:(BOOL)a0;
+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)titleSpecForGenericLocation:(BOOL)a0;
+ (id)specCollectionForMeaningLabel:(id)a0 allowAllCities:(BOOL)a1;

@end
