@interface ABPersonInitials : NSObject

+ (id)initialForName:(id)a0;
+ (id)ignoredCharacterSet;
+ (id)initialsForFirstName:(id)a0 lastName:(id)a1;
+ (id)initialsForFirstName:(id)a0 lastName:(id)a1 reverse:(char)a2;
+ (id)initialsForName:(id)a0;
+ (id)initialsForPerson:(id)a0;
+ (id)newIgnoredCharacterSet;
+ (id)parenthesesRegex;
+ (char)personShowsLastNameFirst:(id)a0;
+ (id)pool_initialsForFirstName:(id)a0 lastName:(id)a1;
+ (id)prepareStringForInitializing:(id)a0;
+ (void)removeParentheticalFromString:(id)a0;
+ (void)removePunctuationFromString:(id)a0;

@end
