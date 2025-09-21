@interface DMFStopAirPlayMirroringRequest : DMFTaskRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
