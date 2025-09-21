@class EKEvent;

@interface SGUISuggestedEventDayViewAppearanceDelegate : CalUIDayViewGadgetDefaultAppearance

@property (retain, nonatomic) EKEvent *displayedEvent;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (long long)displayType;
- (id)displayEnd;
- (id)displayStart;
- (double)hourHeight;
- (char)shouldAllDayEventsShowColorBar;
- (char)shouldDisplayCurrentTime;
- (char)shouldDisplayPreviewEventsAsTentative;

@end
