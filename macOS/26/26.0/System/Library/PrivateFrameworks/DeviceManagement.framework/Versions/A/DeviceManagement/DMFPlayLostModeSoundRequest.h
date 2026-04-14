@interface DMFPlayLostModeSoundRequest : DMFTaskRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
