@class NSString, NSNumber;

@interface WFNumberFieldParameter : WFParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) BOOL allowsDecimalNumbers;
@property (readonly, nonatomic) BOOL allowsNegativeNumbers;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)parameterStateFromDialogResponse:(id)a0;
- (BOOL)shouldAlignLabels;

@end
