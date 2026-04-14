@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (void)observableDidSendResult;
- (id)subscribeNextObservable:(id)a0;
- (id)subscribe:(id)a0;
- (BOOL)isObservableEmpty;
- (void).cxx_destruct;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;

@end
