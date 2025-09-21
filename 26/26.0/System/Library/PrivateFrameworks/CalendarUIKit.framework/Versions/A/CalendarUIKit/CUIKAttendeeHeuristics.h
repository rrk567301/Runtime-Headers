@interface CUIKAttendeeHeuristics : NSObject

+ (BOOL)hasAttendessIgnoringSelfOrganizerAndLocations:(id)a0;
+ (id)sortedHumanAttendeesToDisplayForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)_participantRoleSortPriority;
+ (id)_participantStatusSortPriority;
+ (id)sortedHumanAttendeesForEvent:(id)a0 includeResources:(BOOL)a1;

@end
