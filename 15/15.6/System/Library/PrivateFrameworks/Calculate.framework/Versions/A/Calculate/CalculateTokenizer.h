@class NSString, UnitsInfo, CalculateToken, NSSet, NSArray, NSNumberFormatter, NSDictionary, Trie, NSMutableSet, NSMutableArray, NSMutableCharacterSet;

@interface CalculateTokenizer : NSObject

@property (class, readonly, nonatomic) NSSet *functionSet;
@property (class, readonly, nonatomic) NSSet *trigonometricSet;
@property (class, readonly, nonatomic) NSSet *laTeXFunctionSet;
@property (class, readonly, nonatomic) NSSet *laTeXTrigonometricSet;

@property (retain, nonatomic) UnitsInfo *unitsInfo;
@property (retain, nonatomic) Trie *trie;
@property (nonatomic) unsigned long long stringLength;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long peekIndex;
@property (retain, nonatomic) NSMutableArray *peekTokens;
@property (retain, nonatomic) CalculateToken *lastToken;
@property (retain, nonatomic) NSMutableArray *wordBreakIndices;
@property (nonatomic) unsigned long long wordBreakIndicesIndex;
@property (retain, nonatomic) NSMutableSet *lowercasedVariables;
@property (nonatomic) unsigned long long variableBufferLength;
@property (nonatomic) unsigned short *variableBuffer;
@property (nonatomic) struct { char letters[26]; int count; } singleLetterVariables;
@property (retain, nonatomic) CalculateToken *prevToken;
@property (retain, nonatomic) CalculateToken *prevToken2;
@property (nonatomic) int prevTokenCount;
@property (retain, nonatomic) NSString *groupingSeparator;
@property (retain, nonatomic) NSString *decimalSeparator;
@property (retain, nonatomic) NSString *currencyGroupingSeparator;
@property (retain, nonatomic) NSString *currencyDecimalSeparator;
@property (nonatomic) char groupingSeparatorSpace;
@property (nonatomic) char decimalSeparatorSpace;
@property (retain, nonatomic) NSMutableCharacterSet *localizedGroupingSet;
@property (retain, nonatomic) NSMutableCharacterSet *localizedDecimalSet;
@property (nonatomic) char needsUpdate;
@property (nonatomic) char foundGraphableVariable;
@property (nonatomic) unsigned long long graphableVariableLength;
@property (readonly, nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSArray *locales;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) char normalizeNumbers;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (retain, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) NSSet *declaredVariables;
@property (readonly, nonatomic) NSString *declaredVariable;
@property (nonatomic) char findDeclaredVariables;
@property (readonly, nonatomic) char isGraphable;
@property (readonly) char _isGraphableReserved;
@property (readonly, nonatomic) char foundGraphableValue;
@property (readonly, nonatomic) NSString *suggestedGraphableVariable;
@property (retain, nonatomic) NSString *graphableVariable;
@property (nonatomic) char isLaTeX;

+ (void)addSymbols:(id)a0;
+ (void)addUnits:(id)a0 builtIn:(char)a1;
+ (int)displayNameExponent:(id)a0;
+ (void)loadPunctuationSet;
+ (void)loadSymbolSet;
+ (id)nonWhitespaceLanguageSet;
+ (id)prepareString:(id)a0;
+ (id)punctuationSet;
+ (id)symbolSet;
+ (id)symbolsTrie;
+ (id)tokenizerWithUnits:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)update;
- (id)nextToken;
- (void)_findNextToken;
- (void)_loadIfNeeded;
- (void)addDeclaredVariable:(id)a0;
- (void)addVariable:(id)a0;
- (id)initWithUnits:(id)a0;
- (id)peekNonWhitespaceToken;
- (id)peekToken;
- (id)peekTokenAtOffset:(long long)a0;

@end
