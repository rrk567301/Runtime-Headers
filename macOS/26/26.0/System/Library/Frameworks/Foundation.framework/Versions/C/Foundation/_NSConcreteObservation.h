@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (id)debugDescription;
- (void)dealloc;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void)_receiveBox:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
