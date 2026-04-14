@interface ABPersonInitials : NSObject

+ (id)initialsForPerson:(id)a0;
+ (id)initialsForName:(id)a0;
+ (BOOL)personShowsLastNameFirst:(id)a0;
+ (id)initialsForFirstName:(id)a0 lastName:(id)a1 reverse:(BOOL)a2;
+ (id)initialsForFirstName:(id)a0 lastName:(id)a1;
+ (id)pool_initialsForFirstName:(id)a0 lastName:(id)a1;
+ (id)initialForName:(id)a0;
+ (id)prepareStringForInitializing:(id)a0;
+ (void)removeParentheticalFromString:(id)a0;
+ (id)parenthesesRegex;
+ (void)removePunctuationFromString:(id)a0;
+ (id)ignoredCharacterSet;
+ (id)newIgnoredCharacterSet;

@end
