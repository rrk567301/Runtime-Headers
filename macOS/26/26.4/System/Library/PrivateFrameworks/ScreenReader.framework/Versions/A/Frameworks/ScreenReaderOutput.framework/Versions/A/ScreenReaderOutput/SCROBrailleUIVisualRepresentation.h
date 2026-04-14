@class NSDictionary;

@interface SCROBrailleUIVisualRepresentation : NSObject {
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ focusedIndex;
    void /* unknown type, empty encoding */ isList;
}

@property (nonatomic, readonly) NSDictionary *dictionaryForUIMessage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLines:(id)a0 focusedIndex:(long long)a1 isList:(BOOL)a2;

@end
