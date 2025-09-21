@interface DMFPlayLostModeSoundRequest : DMFTaskRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
