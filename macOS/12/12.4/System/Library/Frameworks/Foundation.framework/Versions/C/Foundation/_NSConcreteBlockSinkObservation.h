@class NSObject;
@protocol NSObservable;

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    id /* block */ _block;
    int _tag;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)remove;
- (void)finishObserving;
- (void)_receiveBox:(id)a0;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (void *)_observerStorageOfSize:(unsigned long long)a0;
- (id *)_observerStorage;

@end
