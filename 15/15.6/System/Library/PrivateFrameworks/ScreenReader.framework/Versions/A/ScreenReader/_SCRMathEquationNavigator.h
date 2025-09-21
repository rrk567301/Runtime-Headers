@class SCRWebAreaMathGroup, NSArray, NSString;

@interface _SCRMathEquationNavigator : NSObject <SCRBrailleLineNavigator_Internal>

@property (retain, nonatomic) SCRWebAreaMathGroup *elementProvider;
@property (retain, nonatomic) SCRWebAreaMathGroup *_focusedElement;
@property (retain, nonatomic) NSArray *_lastBrailleLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (char)currentLineContainsUIElement:(id)a0;
- (id)initWithMathElement:(id)a0;
- (char)moveToLineForElement:(id)a0 withInfo:(id)a1;
- (id)navigationProvider;
- (char)navigationProviderMatchesElement:(id)a0;
- (char)panLineWithDirection:(long long)a0;

@end
