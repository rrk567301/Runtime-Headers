@class NSString, NSMutableArray, SCRCStackQueue;

@interface SCRElementHistory : NSObject <SCRElementHistoryVendor>

@property (retain, nonatomic) SCRCStackQueue *_screenHistory;
@property (retain, nonatomic) NSMutableArray *_axElementHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addElementToHistory:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1;
- (id)removeLastUIElementFromHistory;
- (id)lastNavigatedValidUIElement;
- (void)flushElementHistory;
- (id)screenHistory;
- (void)startNewScreen;
- (void)flushCurrentScreen;
- (id)parentVendor;
- (id)encodeElementForHistoryStorage:(id)a0;
- (id)decodeUIElementFromHistoryStorage:(id)a0;
- (void)addElementToHistory:(id)a0 event:(id)a1 withEvent:(BOOL)a2;
- (void)_addElementToHistory:(id)a0 historyArray:(id)a1;
- (void)_addElementToScreenCache:(id)a0 screenCache:(id)a1;
- (id)_removeLastElementFromHistoryArray:(id)a0;
- (void)_flushElementHistoryArray:(id)a0;

@end
