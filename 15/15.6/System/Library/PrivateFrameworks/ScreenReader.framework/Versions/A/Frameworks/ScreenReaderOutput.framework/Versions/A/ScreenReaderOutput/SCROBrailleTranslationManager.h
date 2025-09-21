@class NSString, NSObject, BRLTTranslationService;
@protocol OS_dispatch_queue;

@interface SCROBrailleTranslationManager : NSObject <BRLTBrailleTranslationDelegateProtocol>

@property (class, readonly) SCROBrailleTranslationManager *sharedManager;

@property (retain, nonatomic) BRLTTranslationService *translationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) char primaryTableSupportsContractedBraille;
@property (readonly, nonatomic) char primaryTableSupportsEightDotBraille;
@property (nonatomic) char alwaysUsesNemethCodeForTechnicalText;
@property (copy, nonatomic) NSString *defaultLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputManager;

- (id)init;
- (void).cxx_destruct;
- (id)serviceIdentifier;
- (id)printBrailleForText:(id)a0 language:(id)a1 mode:(unsigned long long)a2 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 locations:(id *)a4 textFormattingRanges:(id)a5;
- (id)textForPrintBraille:(id)a0 language:(id)a1 mode:(unsigned long long)a2 locations:(id *)a3;
- (void)loadTranslatorWithServiceIdentifier:(id)a0;
- (void)loadTranslatorWithServiceIdentifier:(id)a0 forUnitTesting:(char)a1;
- (void)loadTranslatorWithServiceIdentifier:(id)a0 forUnitTesting:(char)a1 input:(char)a2;
- (void)loadTranslatorWithServiceIdentifier:(id)a0 input:(char)a1;
- (char)primaryTableSupportsRoundTripping;

@end
