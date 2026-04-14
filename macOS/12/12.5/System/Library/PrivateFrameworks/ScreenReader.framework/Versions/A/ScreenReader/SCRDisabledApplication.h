@interface SCRDisabledApplication : SCRApplication

- (void)setChildren:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)_updateChildrenWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 name:(struct __CFString { } *)a2 uiElement:(id)a3 cancelMask:(unsigned int)a4;
- (BOOL)isDisabledApplication;

@end
