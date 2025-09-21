@class NSString, NSDate, NSFont, NSColor;

@interface CalUIDayViewGadgetDefaultAppearance : NSObject <CalUIDayViewGadgetAppearanceDelegate> {
    NSColor *_nowColor;
    NSColor *_hourLineColor;
}

@property (retain, nonatomic) NSFont *timelineFont;
@property (retain, nonatomic) NSFont *locationFont;
@property (retain, nonatomic) NSFont *titleFont;
@property (retain, nonatomic) NSFont *timeFont;
@property (retain, nonatomic) NSFont *moreFont;
@property (readonly) double heightBeforeFirstEvent;
@property (readonly) double heightAfterLastEvent;
@property (readonly) char shouldDisplayTimeline;
@property (readonly) double timelineWidth;
@property (readonly, nonatomic) unsigned long long numberOfEmptyHoursDisplayed;
@property (readonly) double hourHeight;
@property (readonly) double hourLineOutdent;
@property (readonly) double verticalOffset;
@property (readonly) double horizontalOffset;
@property (readonly) double hourLabelOutdent;
@property (readonly) NSColor *hourLineColor;
@property (readonly) NSColor *nowLineColor;
@property (readonly) double nowLineHeight;
@property (readonly) NSString *truncatedNowLabelFormat;
@property (readonly) long long displayType;
@property (readonly) NSDate *displayStart;
@property (readonly) NSDate *displayEnd;
@property (readonly) char isHourHeightFixed;
@property (readonly) char shouldDrawAllDaySeparator;
@property (readonly) double allDaySeparatorHeight;
@property (readonly) NSColor *allDaySeparatorColor;
@property (readonly) char shouldAlwaysDrawAllDayArea;
@property (readonly) char shouldDisplayCurrentTime;
@property (readonly) char shouldDisplayPreviewEventsAsTentative;
@property (readonly) char shouldAllDayEventsShowColorBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fontWithFontSize:(double)a0 bold:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (id)dateFormat;
- (double)numberOfSecondsBeforeFirstEvent;
- (id)fontForEventOccurrencesWithWeight:(int)a0;
- (double)hourLabelTopMargin;
- (double)hourLabelWidth;
- (id)nowLabelFormat;
- (double)numberOfSecondsAfterLastEvent;

@end
