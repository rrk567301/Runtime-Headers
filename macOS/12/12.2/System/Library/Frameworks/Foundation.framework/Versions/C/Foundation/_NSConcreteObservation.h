@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)remove;
- (void)finishObserving;
- (void)_receiveBox:(id)a0;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
