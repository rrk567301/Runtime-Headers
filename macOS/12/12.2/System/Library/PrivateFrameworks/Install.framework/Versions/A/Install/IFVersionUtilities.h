@interface IFVersionUtilities : NSObject

+ (long long)compareVersions:(id)a0 :(id)a1;
+ (id)_trimVersionString:(id)a0;
+ (id)makeTupleFromString:(id)a0;
+ (id)makeTupleFromDict:(id)a0;
+ (id)_bundlePathForVersPath:(id)a0 withDestinationPath:(id)a1;
+ (void)performPackageVersionCheckForVolume:(id)a0 packageControllers:(id)a1 messages:(id)a2;

@end
