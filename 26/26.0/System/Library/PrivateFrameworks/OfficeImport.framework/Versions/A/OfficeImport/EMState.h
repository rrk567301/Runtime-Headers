@class EDSheet, NSMutableDictionary, EDWorkbook;

@interface EMState : CMState {
    EDWorkbook *_workbook;
    NSMutableDictionary *_hyperlinks;
    NSMutableDictionary *_styleWrappers;
}

@property (retain) EDWorkbook *document;
@property (weak) EDSheet *currentSheet;

- (id)init;
- (void).cxx_destruct;
- (id)cellStyleWrapperForIndex:(unsigned long long)a0;
- (id)hyperlinkForRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (void)setHyperlink:(id)a0 forRow:(unsigned long long)a1 column:(unsigned long long)a2;

@end
