@class NSImageView, EKEvent, NSArray, NSTextField, NSView;

@interface CalUIOccurrenceTableCellView : NSTableCellView

@property (retain) EKEvent *event;
@property (retain) NSArray *detailsFields;
@property (retain) NSImageView *dotImageView;
@property (retain) NSTextField *titleField;
@property (retain) NSView *dotViewBorder;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (id)initWithEvent:(id)a0;
- (id)suggestionString;
- (id)initWithEvent:(id)a0 hideDateField:(BOOL)a1 hideTimeField:(BOOL)a2 hideLocationField:(BOOL)a3 hideAttendeeField:(BOOL)a4;
- (id)initWithEvent:(id)a0 hideDateField:(BOOL)a1 hideTimeField:(BOOL)a2 hideLocationField:(BOOL)a3 hideAttendeeField:(BOOL)a4 occurrenceType:(unsigned long long)a5;
- (void)updateTitleFontIsSelected:(BOOL)a0;
- (id)dateStringForDate:(id)a0;
- (id)dateAndTimeStringForDate:(id)a0 inTimeZone:(id)a1 clarifyTimeZoneIfNecessary:(BOOL)a2;
- (id)topTimeFieldString;
- (id)bottomTimeFieldString;
- (id)clarifyTimeZone:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)clarifyTimeZoneIfNecessary:(id)a0 timeString:(id)a1 date:(id)a2;
- (BOOL)isMultiDayEvent;
- (BOOL)isSuggestedEvent;
- (id)effectiveEndDate;

@end
