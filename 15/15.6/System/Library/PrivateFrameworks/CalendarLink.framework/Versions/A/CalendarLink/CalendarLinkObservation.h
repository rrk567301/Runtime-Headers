@interface CalendarLinkObservation : NSObject {
    void /* unknown type, empty encoding */ observationStatus;
    void /* unknown type, empty encoding */ observationTask;
}

+ (void)notifyObservers;
+ (char)isObserved;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
