@class BRLTServiceTranslator;

@interface AXBrailleTranslator : NSObject

@property (retain, nonatomic) BRLTServiceTranslator *translator;

+ (id)sharedLock;

- (void).cxx_destruct;
- (id)backTranslateBraille:(id)a0;
- (id)initWithBrailleTable:(id)a0;
- (id)translatePrintText:(id)a0;

@end
