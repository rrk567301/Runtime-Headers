@class NSImageView, NSArray, NSTextField, EKAutocompleteSearchResult, NSView;

@interface CalUIOccurrenceTableCellView : NSTableCellView {
    NSImageView *_checkmarkView;
}

@property (retain) EKAutocompleteSearchResult *searchResult;
@property (retain) NSArray *detailsFields;
@property (retain) NSImageView *dotImageView;
@property (retain) NSTextField *titleField;
@property (retain) NSView *dotViewBorder;

+ (id)effectiveEndDate:(id)a0;
+ (char)isMultiDayEvent:(id)a0;
+ (id)titleFontForSelected:(char)a0;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (id)suggestionString;
- (char)isReminder;
- (id)dateAndTimeStringForDate:(id)a0 inTimeZone:(id)a1 clarifyTimeZoneIfNecessary:(char)a2;
- (id)bottomTimeFieldString;
- (id)clarifyTimeZone:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)clarifyTimeZoneIfNecessary:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)dateStringForDate:(id)a0;
- (id)initWithAutocompleteSearchResult:(id)a0 hideDateField:(char)a1 hideTimeField:(char)a2 width:(double)a3;
- (char)isSuggestedEvent;
- (id)topTimeFieldString;
- (void)updateTitleFontIsSelected:(char)a0;

@end
