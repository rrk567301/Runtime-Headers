@class EKTimedEventStorePurger, NSSet;

@interface PPEventStorageGuardedData : NSObject {
    EKTimedEventStorePurger *_ekStorePurger;
    NSSet *_calendarIdentifiers;
    NSSet *_invisibleCalendarIdentifiers;
}

- (void).cxx_destruct;
- (id)ekStore;

@end
