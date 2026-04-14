@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (long long)backgroundStyle;
- (double)hourHeight;
- (long long)displayType;
- (void).cxx_destruct;
- (id)displayEnd;
- (id)displayStart;
- (BOOL)shouldAllDayEventsShowColorBar;
- (BOOL)shouldDisplayCurrentTime;
- (BOOL)shouldDisplayPreviewEventsAsTentative;

@end
