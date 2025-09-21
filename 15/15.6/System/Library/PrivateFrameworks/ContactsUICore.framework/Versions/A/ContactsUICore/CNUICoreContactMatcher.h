@interface CNUICoreContactMatcher : NSObject

+ (char)doesContact:(id)a0 matchAnyParentOrGuardianInFamily:(id)a1;
+ (char)doesContact:(id)a0 matchContact:(id)a1;
+ (char)doesNameOfContact:(id)a0 matchNameOfContact:(id)a1;
+ (char)doesNameOfContact:(id)a0 matchNameOfFamilyMember:(id)a1;
+ (id)nameFromFammilyMember:(id)a0;

@end
