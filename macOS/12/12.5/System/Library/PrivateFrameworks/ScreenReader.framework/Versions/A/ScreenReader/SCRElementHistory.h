@class NSMutableArray;

@interface SCRElementHistory : NSObject <SCRElementHistoryVendor>

@property (retain, nonatomic) NSMutableArray *_axElementHistory;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)lastNavigatedValidUIElement;
- (id)parentVendor;
- (void)addElementToHistory:(id)a0;
- (id)removeLastUIElementFromHistory;
- (void)flushElementHistory;
- (id)encodeElementForHistoryStorage:(id)a0;
- (void)_addElementToHistory:(id)a0 historyArray:(id)a1;
- (id)_removeLastElementFromHistoryArray:(id)a0;
- (id)decodeUIElementFromHistoryStorage:(id)a0;
- (void)_flushElementHistoryArray:(id)a0;

@end
