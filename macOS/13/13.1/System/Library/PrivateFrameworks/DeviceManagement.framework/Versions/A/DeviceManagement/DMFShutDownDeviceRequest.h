@interface DMFShutDownDeviceRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
