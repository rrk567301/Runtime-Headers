@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (id)debugDescription;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void)_receiveBox:(id)a0;
- (void)remove;
- (void)dealloc;
- (void)finishObserving;
- (BOOL)isEqual:(id)a0;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
