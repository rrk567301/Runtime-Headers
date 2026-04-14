@class NSString, CalDAVUpdateFreeBusySetTaskGroup;

@interface CalDAVChangeCalendarAffectsAvailabilityQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVTaskGroupDelegate> {
    CalDAVUpdateFreeBusySetTaskGroup *_updateFreeBusySetTaskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
