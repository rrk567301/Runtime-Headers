@interface EKEventOccurrenceProtocol_Shared : NSObject

+ (long long)statusFromString:(id)a0;
+ (BOOL)allowsParticipantStatusModifications:(id)a0;
+ (BOOL)event:(id)a0 intersectsRange:(id)a1 exclusionOptions:(long long)a2;
+ (BOOL)event:(id)a0 shouldBeIncluded:(long long)a1;
+ (BOOL)allowsAvailabilityModifications:(id)a0;
+ (long long)availability:(id)a0;
+ (BOOL)event:(id)a0 shouldBeIncludedIfIntersectsRange:(id)a1 exclusionOptions:(long long)a2;

@end
