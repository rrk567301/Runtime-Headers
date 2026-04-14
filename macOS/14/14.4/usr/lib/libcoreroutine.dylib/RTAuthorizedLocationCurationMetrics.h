@interface RTAuthorizedLocationCurationMetrics : NSObject

@property float maxCumulativeDwellTimeForNotFamiliarLoiHours;
@property int maxUniqueVisitDaysForNotFamiliarLois;
@property int ageDaysRegistry;
@property int ageDaysFirstAnyLoiVisit;
@property int ageDaysFirstTopLoiVisit;
@property int ageDaysFirstTopLoiRegisteredVisit;
@property int ageDaysFirstTopLoiGeoVisit;
@property float visitRegistrationFraction;
@property float registrationUsesBestTimeFraction;

- (id)init;

@end
