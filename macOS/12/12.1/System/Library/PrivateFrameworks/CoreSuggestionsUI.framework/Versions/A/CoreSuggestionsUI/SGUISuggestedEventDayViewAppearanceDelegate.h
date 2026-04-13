@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (long long)displayType;
- (double)hourHeight;
- (id)displayEnd;
- (id)displayStart;
- (BOOL)shouldDisplayCurrentTime;
- (BOOL)shouldDisplayPreviewEventsAsTentative;
- (BOOL)shouldAllDayEventsShowColorBar;

@end
