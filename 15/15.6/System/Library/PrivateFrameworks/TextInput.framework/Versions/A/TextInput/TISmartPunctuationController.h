@class TISmartPunctuationOptions, NSCharacterSet;

@interface TISmartPunctuationController : NSObject {
    char _leftSingleQuotationMarkInserted;
    char _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
}

@property (nonatomic) char smartQuotesEnabled;
@property (nonatomic) char smartDashesEnabled;
@property (nonatomic) unsigned long long autoQuoteType;
@property (retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions;

+ (id)_chineseContextualVariantMapping;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_alternatingStringForInputString:(id)a0 isLockedInput:(char)a1 hasMarkedText:(char)a2;
- (id)_checkInput:(id)a0 forContextualChinesePunctuationInDocumentState:(id)a1;
- (id)_checkInput:(id)a0 forContextualDashesInDocumentState:(id)a1;
- (id)_checkInput:(id)a0 forContextualEllipsesInDocumentState:(id)a1;
- (id)_checkInput:(id)a0 forContextualQuotesInDocumentState:(id)a1;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (id)smartPunctuationOutputForInput:(id)a0 isLockedInput:(char)a1 documentState:(id)a2;
- (id)smartPunctuationResultsForString:(id)a0;
- (id)smartPunctuationedStringForString:(id)a0;

@end
