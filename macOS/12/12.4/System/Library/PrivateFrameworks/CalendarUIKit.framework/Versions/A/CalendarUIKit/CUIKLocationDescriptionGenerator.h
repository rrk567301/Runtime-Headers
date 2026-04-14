@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)conferenceStringForURL:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)locationStringForEvent:(id)a0;
+ (id)_locationStringsRemovingVirtualConference:(id)a0 event:(id)a1;
+ (id)_conferenceURLForEvent:(id)a0;
+ (BOOL)_conferenceURL:(id)a0 isSameAsLocationString:(id)a1;
+ (id)_conferenceStringForURL:(id)a0 options:(unsigned long long)a1 outImageNames:(id *)a2;
+ (id)glyphNamesForConferenceString:(id)a0;

@end
