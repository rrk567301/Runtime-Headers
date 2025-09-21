@class NSArray;

@interface SCROBrailleUIListView : SCROBrailleUIView

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) long long focusedIndex;
@property (readonly, nonatomic) BOOL isEdited;

- (id)handleEvent:(id)a0;
- (id)value;
- (void)display;
- (void).cxx_destruct;
- (id)focusedItem;
- (void)_copySelectedBrailleAndErase:(BOOL)a0;
- (void)_resetInLineItem;
- (void)displaySilently:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 items:(id)a1;
- (id)initWithIdentifier:(id)a0 items:(id)a1 initialFocus:(id)a2;
- (id)initWithIdentifier:(id)a0 items:(id)a1 initialFocusedIndex:(unsigned long long)a2;
- (void)replaceItemAtIndex:(long long)a0 with:(id)a1;
- (id)visualRepresentation;

@end
