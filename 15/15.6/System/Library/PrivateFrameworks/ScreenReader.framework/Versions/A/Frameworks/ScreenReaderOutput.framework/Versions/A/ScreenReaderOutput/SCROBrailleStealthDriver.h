@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    char _isDriverLoaded;
    NSString *_modelIdentifier;
    long long _mainSize;
    long long _statusSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)interfaceVersion;
- (char)isInputEnabled;
- (id)modelIdentifier;
- (int)brailleInputMode;
- (id)getInputEvents;
- (char)isDriverLoaded;
- (char)isSleeping;
- (int)loadDriverWithIOElement:(id)a0;
- (long long)mainSize;
- (char)postsKeyboardEvents;
- (char)setMainCells:(const char *)a0 length:(long long)a1;
- (char)setStatusCells:(const char *)a0 length:(long long)a1;
- (long long)statusSize;
- (char)supportsBlinkingCursor;
- (char)unloadDriver;

@end
