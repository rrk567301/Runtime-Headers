@class NSString, NSMutableArray, NSLock;
@protocol SCROVirtualBrailleDriverDelegate;

@interface SCROVirtualBrailleDriver : NSObject <SCROBrailleDriverProtocol> {
    id<SCROVirtualBrailleDriverDelegate> _delegate;
    long long _mainSize;
    NSString *_mainCells;
    NSMutableArray *_enqueuedEvents;
    NSLock *_eventLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)interfaceVersion;
- (char)isInputEnabled;
- (id)modelIdentifier;
- (int)brailleInputMode;
- (void)enqueueDot:(long long)a0 down:(char)a1;
- (void)enqueuePan:(char)a0 down:(char)a1;
- (void)enqueueRouter:(unsigned long long)a0 down:(char)a1;
- (void)enqueueSpaceWithDown:(char)a0;
- (id)getInputEvents;
- (id)initWithMainSize:(long long)a0 delegate:(id)a1;
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
