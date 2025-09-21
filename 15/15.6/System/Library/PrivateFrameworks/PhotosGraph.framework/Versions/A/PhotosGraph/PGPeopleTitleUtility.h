@interface PGPeopleTitleUtility : NSObject

+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)a0 titleComponent:(id)a1 containsMe:(char)a2;
+ (id)beautifiedLocationStringWithPersonNode:(id)a0 peopleAddressEdge:(id)a1 titleComponent:(id)a2 insertLineBreak:(char)a3 allowFamilyHome:(char)a4 serviceManager:(id)a5;
+ (id)nameFromPersonNode:(id)a0 serviceManager:(id)a1;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(char)a1 allowUnnamed:(char)a2 allowedGroupsFormat:(unsigned long long)a3 insertLineBreaks:(char)a4 serviceManager:(id)a5;
+ (id)nameStringForPersonNodes:(id)a0 includeMe:(char)a1 insertLineBreaks:(char)a2 serviceManager:(id)a3;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1;
+ (id)peopleGroupNameForPersonNodes:(id)a0 allowedGroupsFormat:(unsigned long long)a1 fallbackToGeneric:(char)a2;

@end
