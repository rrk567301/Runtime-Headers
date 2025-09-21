@class NSString, NSArray;

@interface _GCKeyboardAndMouseEventSubject : NSObject <_GCPointerEventSource, _GCDigitizerEventSource, _GCScrollEventSource, _GCKeyboardEventSource, _GCButtonEventSource> {
    unsigned long long _lastButtonMask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSArray *buttonEventObservers;
@property (copy) NSArray *keyboardEventObservers;
@property (copy) NSArray *scrollEventObservers;
@property (copy) NSArray *digitizerEventObservers;
@property (copy) NSArray *pointerEventObservers;

- (id)init;
- (void).cxx_destruct;
- (id)observeButtonEvents:(id /* block */)a0;
- (id)observeDigitizerEvents:(id /* block */)a0;
- (id)observeKeyboardEvents:(id /* block */)a0;
- (id)observePointerEvents:(id /* block */)a0;
- (id)observeScrollEvents:(id /* block */)a0;

@end
