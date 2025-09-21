@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    char _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;
- (char)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribeNextObservable:(id)a0;

@end
