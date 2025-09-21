@interface RTAuthorizedLocationZDRLocationLiveMetrics : NSObject

@property int zdrConfirmationStatus;
@property int zdrConfirmationStatusCode;
@property double distanceBetweenZDRToUserLocation_m;
@property double zdrComputationTime_s;
@property BOOL isVisitUsedForZdrConfirmation;
@property int zdrConfirmationPlaceType;
@property int confirmedALOIMatchedWithZDRType;
@property double timeSinceEraseInstall_s;

- (id)init;

@end
