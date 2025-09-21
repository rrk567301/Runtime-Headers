@interface SGCuratedContactMatcher : NSObject

+ (id)fetchMeContactFromContactStore:(id)a0;
+ (id)_filterCandidates:(id)a0 withUniqueDetailMatchesToContact:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; char x4; char x5; char x6; char x7; char x8; float x9; int x10; int x11; int x12; int x13; int x14; char x15; } *)a2;
+ (id)_birthdayDateFormatter;
+ (char)_compareContact:(id)a0 cnContact:(id)a1 newDetails:(id *)a2 matchedDetails:(id *)a3 matchPreference:(long long)a4 stopOnNewDetail:(char)a5 stopOnMatchedDetail:(char)a6;
+ (id)_filterCandidates:(id)a0 similarToName:(id)a1 exceedingThreshold:(double)a2;
+ (id)_findContactsMatchingPseudoContact:(id)a0 withName:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; char x4; char x5; char x6; char x7; char x8; float x9; int x10; int x11; int x12; int x13; int x14; char x15; } *)a2 fromContactStore:(id)a3 withKeysToFetch:(id)a4;
+ (id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)a0 withName:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; char x4; char x5; char x6; char x7; char x8; float x9; int x10; int x11; int x12; int x13; int x14; char x15; } *)a2 fromContactStore:(id)a3 withKeysToFetch:(id)a4;
+ (id)_getPeopleWithNameToken:(id)a0 fromContactStore:(id)a1 withKeysToFetch:(id)a2 ifMatchingPredicate:(id /* block */)a3;
+ (char)_isMeContact:(id)a0 withContactStore:(id)a1;
+ (id)_lookupContact:(id)a0 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; char x4; char x5; char x6; char x7; char x8; float x9; int x10; int x11; int x12; int x13; int x14; char x15; } *)a1 fromContactStore:(id)a2 withKeysToFetch:(id)a3;
+ (id)_realtimeContactFromPseudoContact:(id)a0 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; char x4; char x5; char x6; char x7; char x8; float x9; int x10; int x11; int x12; int x13; int x14; char x15; } *)a1 assimilatingMatchingCuratedContacts:(id)a2;
+ (id)_realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 fromEntity:(id)a2 normalizedName:(id)a3 error:(id *)a4;
+ (void)clearMeContactCache;
+ (void)compareContact:(id)a0 cnContact:(id)a1 newDetails:(id *)a2 matchedDetails:(id *)a3 matchPreference:(long long)a4;
+ (char)compareContact:(id)a0 cnContact:(id)a1 stopOnNewDetail:(char)a2 stopOnMatchedDetail:(char)a3 matchPreference:(long long)a4;
+ (id)curatedContactsFromContactStore:(id)a0 matchingPseudoContact:(id)a1 error:(id *)a2;
+ (id)filterCandidates:(id)a0 withDetailSubsetOfCNContact:(id)a1;
+ (id)realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 error:(id *)a2;
+ (id)realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 fromEntity:(id)a2 error:(id *)a3;
+ (id)stripBirthdayFromSGContact:(id)a0;
+ (id)stripStaleBirthdayFromSGContact:(id)a0 withEntity:(id)a1;

@end
