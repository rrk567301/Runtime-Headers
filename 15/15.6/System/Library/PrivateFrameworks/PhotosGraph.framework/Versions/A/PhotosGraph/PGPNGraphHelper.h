@interface PGPNGraphHelper : NSObject

+ (id)verifiedPeopleSocialGroupsWithPhotoLibrary:(id)a0 updateBlock:(id /* block */)a1;
+ (id)_createSocialGraphWithPersonClusterManager:(id)a0 persons:(id)a1 moments:(id)a2 inferredMePersonLocalIdentifier:(id *)a3 updateBlock:(id /* block */)a4;
+ (id)_socialGroupsLocalIdentifiersInGraph:(id)a0 includeMeNode:(char)a1 includeCouples:(char)a2 includeInvalid:(char)a3;
+ (id)densityClusteringForObjects:(id)a0 maximumDistance:(double)a1 minimumNumberOfObjects:(unsigned long long)a2 withDistanceBlock:(id /* block */)a3;
+ (id)multiLevelSocialGroupsWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
+ (id)socialGroupsOverTheYearsWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
+ (id)suggestedMeIdentifierWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;

@end
