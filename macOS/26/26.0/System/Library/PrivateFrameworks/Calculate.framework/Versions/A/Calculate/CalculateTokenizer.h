@class NSString, UnitsInfo, CalculateToken, NSSet, NSArray, NSNumberFormatter, NSDictionary, Trie, NSMutableSet, NSMutableArray, NSMutableCharacterSet;

@interface CalculateTokenizer : NSObject

@property (class, readonly, nonatomic) NSSet *nonTrigFunctionSet;
@property (class, readonly, nonatomic) NSSet *trigonometricSet;
@property (class, readonly, nonatomic) NSSet *laTeXNonTrigFunctionSet;
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
@property (nonatomic) struct { BOOL letters[26]; int count; } singleLetterVariables;
@property (retain, nonatomic) CalculateToken *prevToken;
@property (retain, nonatomic) CalculateToken *prevToken2;
@property (nonatomic) int prevTokenCount;
@property (retain, nonatomic) NSString *groupingSeparator;
@property (retain, nonatomic) NSString *decimalSeparator;
@property (retain, nonatomic) NSString *currencyGroupingSeparator;
@property (retain, nonatomic) NSString *currencyDecimalSeparator;
@property (nonatomic) BOOL groupingSeparatorSpace;
@property (nonatomic) BOOL decimalSeparatorSpace;
@property (retain, nonatomic) NSMutableCharacterSet *localizedGroupingSet;
@property (retain, nonatomic) NSMutableCharacterSet *localizedDecimalSet;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) BOOL foundGraphableVariable;
@property (nonatomic) unsigned long long graphableVariableLength;
@property (readonly, nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSArray *locales;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) BOOL normalizeNumbers;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (retain, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) NSSet *declaredVariables;
@property (readonly, nonatomic) NSString *declaredVariable;
@property (nonatomic) BOOL findDeclaredVariables;
@property (readonly, nonatomic) BOOL isGraphable;
@property (readonly) BOOL _isGraphableReserved;
@property (readonly, nonatomic) long long graphableType;
@property (readonly, nonatomic) BOOL foundGraphableValue;
@property (readonly, nonatomic) NSString *suggestedGraphableVariable;
@property (retain, nonatomic) NSString *graphableVariable;
@property (nonatomic) BOOL isLaTeX;

+ (void)_addSymbols:(id)a0 normalized:(id)a1 tokenType:(unsigned long long)a2 isLaTeX:(BOOL)a3 trie:(id)a4;
+ (void)addLocalizedSymbols:(id)a0 locales:(id)a1;
+ (void)addSymbols:(id)a0;
+ (void)addUnits:(id)a0 builtIn:(BOOL)a1;
+ (int)displayNameExponent:(id)a0;
+ (void)loadPunctuationSet;
+ (void)loadSymbolSet;
+ (id)localizedSymbolsTrie:(id)a0;
+ (id)nonWhitespaceLanguageSet;
+ (id)prepareString:(id)a0;
+ (id)punctuationSet;
+ (id)symbolSet;
+ (id)tokenizerWithUnits:(id)a0;

- (void)reset;
- (void)dealloc;
- (id)init;
- (void)update;
- (void).cxx_destruct;
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
