@class NSTimeZone, NSCalendar, _NSDatePickerCalendarOverlay, NSLocale, NSDate, NSColor;
@protocol NSDatePickerCellDelegate;

@interface NSDatePicker : NSControl <_NSDatePickerCalendarOverlayDelegate>

@property (retain) _NSDatePickerCalendarOverlay *_calendarOverlay;
@property BOOL _isShowingCalendarOverlay;
@property BOOL _isInOverlay;
@property unsigned long long datePickerStyle;
@property (getter=isBezeled) BOOL bezeled;
@property (getter=isBordered) BOOL bordered;
@property BOOL drawsBackground;
@property (copy) NSColor *backgroundColor;
@property (copy) NSColor *textColor;
@property unsigned long long datePickerMode;
@property unsigned long long datePickerElements;
@property (copy) NSCalendar *calendar;
@property (copy) NSLocale *locale;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSDate *dateValue;
@property double timeInterval;
@property (copy) NSDate *minDate;
@property (copy) NSDate *maxDate;
@property BOOL presentsCalendarOverlay;
@property (weak) id<NSDatePickerCellDelegate> delegate;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingTimeInterval;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)_setMouseTrackingForCell:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)removeFromSuperview;
- (double)baselineOffsetFromBottom;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonAwake;
- (void)rightMouseUp:(id)a0;
- (void)_removeAllCellMouseTracking;
- (void)rightMouseDragged:(id)a0;
- (void)_calendarOverlayShouldClose:(id)a0;
- (void)_selectNextKeyViewHidingOverlayView:(id)a0;
- (void)_selectPreviousKeyViewHidingOverlayView:(id)a0;
- (void)_selectedDateDidChangeToDate:(id)a0 forOverlayView:(id)a1;
- (BOOL)_shouldShowCalendarOverlayForEvent:(id)a0;
- (BOOL)_currentConfigurationSupportsCalendarOverlay;
- (BOOL)_shouldShowOverlayForElement:(int)a0;
- (void)_showCalendarOverlay;
- (void)_hideCalendarOverlay;
- (id)_datePickerCell;
- (void)_reloadFieldElementData;
- (id)_fieldElementData;
- (id)_disabledTextColor;
- (void)_setDisabledTextColor:(id)a0;
- (BOOL)_forcesLeadingZeroes;
- (void)_setForcesLeadingZeroes:(BOOL)a0;
- (BOOL)_wrapsDateComponentArithmetic;
- (void)_setWrapsDateComponentArithmetic:(BOOL)a0;
- (id)ns_widgetType;
- (BOOL)ns_isGraphical;
- (BOOL)ns_hasClock;
- (BOOL)ns_hasCalendar;
- (BOOL)ns_hasClockAndCalendar;

@end
