@class NSObject;
@protocol NSObservable;

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    id /* block */ _block;
    int _tag;
}

- (id)debugDescription;
- (void)remove;
- (void)_receiveBox:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)finishObserving;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (void)dealloc;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
