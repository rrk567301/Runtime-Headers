@class NSImageView, EKEvent, NSArray, NSTextField, NSView;

@interface CalUIOccurrenceTableCellView : NSTableCellView

@property (retain) EKEvent *event;
@property (retain) NSArray *detailsFields;
@property (retain) NSImageView *dotImageView;
@property (retain) NSTextField *titleField;
@property (retain) NSView *dotViewBorder;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (id)suggestionString;
- (BOOL)isMultiDayEvent;
- (id)dateAndTimeStringForDate:(id)a0 inTimeZone:(id)a1 clarifyTimeZoneIfNecessary:(BOOL)a2;
- (id)bottomTimeFieldString;
- (id)clarifyTimeZone:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)clarifyTimeZoneIfNecessary:(id)a0 timeString:(id)a1 date:(id)a2;
- (id)dateStringForDate:(id)a0;
- (id)effectiveEndDate;
- (id)initWithEvent:(id)a0 hideDateField:(BOOL)a1 hideTimeField:(BOOL)a2 hideLocationField:(BOOL)a3 hideAttendeeField:(BOOL)a4;
- (id)initWithEvent:(id)a0 hideDateField:(BOOL)a1 hideTimeField:(BOOL)a2 hideLocationField:(BOOL)a3 hideAttendeeField:(BOOL)a4 occurrenceType:(unsigned long long)a5;
- (BOOL)isSuggestedEvent;
- (id)topTimeFieldString;
- (void)updateTitleFontIsSelected:(BOOL)a0;

@end
