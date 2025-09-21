@interface CUIKAutocompleteUtils : NSObject

+ (id)_copyAlarmsForAutocompleteFromResult:(id)a0;
+ (id)_now;
+ (void)applyTimeToAutocompleteResults:(id)a0 usingCurrentStartDate:(id)a1 currentEndDate:(id)a2 timeImplicitlySet:(BOOL)a3;
+ (id)foundInStringForResult:(id)a0 pasteboardEvent:(BOOL)a1 outGlyphNames:(id *)a2;
+ (id)inviteeStringForResult:(id)a0;
+ (id)locationStringForResult:(id)a0 outGlyphNames:(id *)a1;
+ (void)modifyCurrentEvent:(id)a0 withAutocompleteResult:(id)a1 isPasteboardResult:(BOOL)a2 calendarToPasteTo:(id)a3 outHasModifiedAttendeesFromSuggestion:(BOOL *)a4;
+ (BOOL)shouldShowOtherTimeZoneForResult:(id)a0;
+ (id)timeStringForResult:(id)a0 usingTimeZone:(id)a1;
+ (id)titleStringForResult:(id)a0;

@end
