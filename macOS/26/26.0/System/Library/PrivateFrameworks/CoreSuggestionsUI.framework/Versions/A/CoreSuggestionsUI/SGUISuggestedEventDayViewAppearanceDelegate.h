@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (double)hourHeight;
- (long long)displayType;
- (void).cxx_destruct;
- (long long)backgroundStyle;
- (id)displayEnd;
- (id)displayStart;
- (BOOL)shouldAllDayEventsShowColorBar;
- (BOOL)shouldDisplayCurrentTime;
- (BOOL)shouldDisplayPreviewEventsAsTentative;

@end
