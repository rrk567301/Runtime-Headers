@interface CalendarLinkObservation : NSObject {
    void /* unknown type, empty encoding */ observationStatus;
    void /* unknown type, empty encoding */ observationTask;
}

+ (void)notifyObservers;
+ (BOOL)isObserved;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
