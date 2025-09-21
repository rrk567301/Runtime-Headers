@class NSArray, CNContact;
@protocol CNContactChangesObserver;

@interface CNContactChangesObserverProxy : NSObject {
    char _unify;
    id<CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

- (void).cxx_destruct;

@end
