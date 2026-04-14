@class IKImageBrowserView, NSDate;

@interface IKImageBrowserVMScheduler : NSObject {
    IKImageBrowserView *_browser;
    BOOL _pause;
    BOOL _idle;
    BOOL _scheduleShouldAbort;
    BOOL _needScheduleVMForScrolling;
    int _scrollScheduleIndex;
    id _firstImageScheduled;
    int _vramBindedCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _zoomScheduleItemRange;
    NSDate *_lastDebugDisplay;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)browser;
- (void)setBrowser:(id)a0;
- (void)schedule;
- (BOOL)hasRamLeftToContinueSchedule;
- (BOOL)hasVRamLeftToContinueSchedule;
- (void)scrollScheduleStep;
- (void)browserScroll;
- (void)browserZoom;
- (void)browserDatasourceChanged;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentVRamBindedRange;
- (void)setFirstImageScheduled:(id)a0;
- (void)startSchedule;
- (void)abortSchedule;
- (id)scheduleProgress;
- (id)scheduleTaskPriority;

@end
