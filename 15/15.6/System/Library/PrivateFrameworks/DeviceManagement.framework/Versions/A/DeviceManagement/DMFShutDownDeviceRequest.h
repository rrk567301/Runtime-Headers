@interface DMFShutDownDeviceRequest : DMFTaskRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
