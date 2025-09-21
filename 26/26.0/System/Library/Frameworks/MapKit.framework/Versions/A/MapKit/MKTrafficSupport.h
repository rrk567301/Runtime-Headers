@interface MKTrafficSupport : NSObject

+ (int)GEORouteIncidentTypeForGEOTrafficIncidentType:(int)a0;
+ (int)GEOTrafficIncidentTypeForVKTrafficIncidentType:(long long)a0;
+ (int)GEOTrafficIncidentTypeForGEORouteIncidentType:(int)a0;
+ (long long)VKTrafficIncidentTypeForGEORouteIncidentType:(int)a0;
+ (long long)VKTrafficIncidentTypeForGEOTrafficIncidentType:(int)a0;
+ (id)sharedTrafficSupport;

- (id)localizedRAPDescriptionForGEOTrafficIncidentType:(int)a0;
- (id)localizedReportConfirmationForGEOTrafficIncidentType:(int)a0;
- (id)localizedReportedByYouForGEOTrafficIncidentType:(int)a0;
- (id)localizedSubtitleForStreet:(id)a0 crossStreet:(id)a1;
- (id)localizedTitleForGEOIncidentType:(int)a0 laneType:(int)a1 laneCount:(unsigned long long)a2;
- (id)localizedTitleForIncidentType:(long long)a0 laneType:(long long)a1 laneCount:(unsigned long long)a2;
- (void)setupTrafficIncidents;

@end
