@class NSString, NSMutableSet;

@interface CalDAVAddCalendarQueueableOperation : CalDAVCalendarQueueableOperation {
    int _state;
    BOOL _isAutoScheduleSupported;
    BOOL _isEventContainer;
    BOOL _isTaskContainer;
}

@property (retain) NSMutableSet *propertiesToSet;
@property (retain) NSMutableSet *fallbackProperties;
@property (retain) NSString *uri;
@property (retain) NSString *inboxURI;

+ (id)mkcalendarPropertiesWithDisplayName:(id)a0 color:(id)a1 symbolicColorName:(id)a2 order:(unsigned long long)a3 notes:(id)a4 timeZone:(id)a5 shouldSetTransparency:(BOOL)a6 isAffectingAvailability:(BOOL)a7 isAutoscheduleSupported:(BOOL)a8 fallbackProperties:(id)a9;
+ (id)generateTimeZoneString:(id)a0;

- (void).cxx_destruct;
- (void)performOperation;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 isAffectingAvailability:(BOOL)a2 isAutoscheduleSupported:(BOOL)a3;
- (void)performComplete;
- (void)_updateACL;
- (id)_createReadFreeBusyACE;
- (void)_updateFreeBusySet;

@end
