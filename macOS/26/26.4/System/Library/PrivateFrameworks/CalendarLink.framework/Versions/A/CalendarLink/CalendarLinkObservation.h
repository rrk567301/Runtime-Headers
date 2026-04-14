@interface CalendarLinkObservation : NSObject {
    void /* unknown type, empty encoding */ observationStatus;
    void /* unknown type, empty encoding */ observationTask;
}

+ (void)notifyObservers;
+ (BOOL)isObserved;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
