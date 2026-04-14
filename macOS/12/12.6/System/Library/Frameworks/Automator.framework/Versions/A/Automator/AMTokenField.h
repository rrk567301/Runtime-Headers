@class NSString, NSCharacterSet;

@interface AMTokenField : NSTokenField

@property (retain) NSCharacterSet *retainedTokenizingCharacterSet;
@property (readonly, nonatomic) NSString *observedParameterKey;

+ (Class)cellClass;

- (id)stringValue;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)textDidChange:(id)a0;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (id)tokenFieldCell:(id)a0 shouldUseWritablePasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseReadablePasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseDraggingPasteboardTypes:(id)a1;
- (void)updateTokenNames:(id)a0;
- (void)variableWasRemoved:(id)a0;
- (void)updateParameter;
- (void)makeNewVariable:(id)a0;

@end
