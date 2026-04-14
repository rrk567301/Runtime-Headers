@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (long long)displayType;
- (BOOL)shouldDisplayCurrentTime;
- (BOOL)shouldDisplayPreviewEventsAsTentative;
- (BOOL)shouldAllDayEventsShowColorBar;
- (id)displayStart;
- (id)displayEnd;
- (double)hourHeight;

@end
