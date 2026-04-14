@interface TMIdentity : NSObject

+ (id)localUsers;
+ (BOOL)shouldDisplayUIForUser:(id)a0;
+ (id)localUserHomes;
+ (id)mountPointsForVolumesContainingLocalUserHomes;
+ (void)_enumerateLocalUserHomeDirectoriesWithBlock:(id /* block */)a0;

@end
