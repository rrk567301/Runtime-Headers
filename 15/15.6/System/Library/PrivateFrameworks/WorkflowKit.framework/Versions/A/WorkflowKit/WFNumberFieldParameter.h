@class NSString;

@interface WFNumberFieldParameter : WFParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) char allowsDecimalNumbers;
@property (readonly, nonatomic) char allowsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)defaultAllowsDecimalNumbers;
+ (char)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)parameterStateFromDialogResponse:(id)a0;
- (char)shouldAlignLabels;

@end
