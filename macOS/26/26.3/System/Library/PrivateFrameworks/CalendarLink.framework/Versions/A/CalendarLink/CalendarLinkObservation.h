@interface CalendarLinkObservation : NSObject {
    void /* unknown type, empty encoding */ observationStatus;
    void /* unknown type, empty encoding */ observationTask;
}

+ (void)notifyObservers;
+ (BOOL)isObserved;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
