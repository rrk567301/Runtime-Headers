@class BRLTSTranslator, BRLTTable;

@interface BRLTServiceTranslator : NSObject

@property (retain, nonatomic) BRLTSTranslator *translator;
@property (readonly, nonatomic) BRLTTable *table;

- (id)initWithTable:(id)a0;
- (void).cxx_destruct;
- (id)brailleForText:(id)a0 locations:(out id *)a1;
- (id)textForBraille:(id)a0 locations:(out id *)a1;
- (id)_arrayFromData:(id)a0;
- (id)_locationMapWithLength:(long long)a0 forArray:(id)a1 defaultLocation:(long long)a2;

@end
