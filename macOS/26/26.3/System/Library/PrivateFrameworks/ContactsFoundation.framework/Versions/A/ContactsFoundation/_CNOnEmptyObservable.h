@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (id)subscribeNextObservable:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)isObservableEmpty;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;
- (void)observableDidSendResult;

@end
