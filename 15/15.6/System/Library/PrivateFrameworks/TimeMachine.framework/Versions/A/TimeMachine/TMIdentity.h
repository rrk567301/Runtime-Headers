@interface TMIdentity : NSObject

+ (id)localUsers;
+ (void)_enumerateLocalUserHomeDirectoriesWithBlock:(id /* block */)a0;
+ (id)localUserHomes;
+ (id)mountPointsForVolumesContainingLocalUserHomes;
+ (char)shouldDisplayUIForUser:(id)a0;

@end
