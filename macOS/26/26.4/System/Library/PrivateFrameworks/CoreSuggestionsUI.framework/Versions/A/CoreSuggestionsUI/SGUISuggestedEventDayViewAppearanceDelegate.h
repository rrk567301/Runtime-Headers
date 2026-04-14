@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (long long)backgroundStyle;
- (double)hourHeight;
- (void).cxx_destruct;
- (long long)displayType;
- (id)displayEnd;
- (id)displayStart;
- (BOOL)shouldAllDayEventsShowColorBar;
- (BOOL)shouldDisplayCurrentTime;
- (BOOL)shouldDisplayPreviewEventsAsTentative;

@end
