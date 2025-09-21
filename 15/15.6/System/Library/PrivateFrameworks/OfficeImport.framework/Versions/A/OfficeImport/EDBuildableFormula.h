@class NSString;

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
    struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *mTree;
    int mWarning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)warningType;
- (void)setWarning:(int)a0;
- (id)formula;
- (char)isConstantList:(unsigned int)a0;
- (char)copyToken:(unsigned int)a0 from:(id)a1;
- (char)addArrayWithCol:(int)a0 andRow:(int)a1;
- (char)addInfixOperator:(int)a0 atIndex:(unsigned int)a1 factor:(double)a2;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1;
- (char *)addToken:(int)a0 extendedDataLength:(unsigned int)a1 numArgs:(int)a2;
- (BOOL)argTokenIsDurationAtIndex:(unsigned int)a0;
- (int)argTokenTypeAtIndex:(unsigned int)a0;
- (char)convertLastRefsToArea;
- (char)convertRefs:(unsigned int)a0 toType:(int)a1;
- (char)convertRefs:(unsigned int)a0 toTypes:(int *)a1;
- (void)convertRefsInList:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0 toType:(int)a1;
- (char)convertToIntersect:(unsigned int)a0;
- (char)convertToList:(unsigned int)a0;
- (char)convertToList:(unsigned int)a0 withFinalParen:(char)a1;
- (void)copyToFormula:(id)a0;
- (char)fixTableOfConstantsRef:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0;
- (char)fixTableOfConstantsRefs;
- (char)insertExternalName:(unsigned long long)a0 withLink:(unsigned long long)a1 atIndex:(unsigned int)a2;
- (char)insertName:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (char)insertName:(unsigned long long)a0 link:(unsigned long long)a1 external:(char)a2 atIndex:(unsigned int)a3;
- (char)insertVariableFunction:(unsigned short)a0 afterIndex:(unsigned int)a1 numArgs:(unsigned int)a2;
- (BOOL)isSupportedFormula;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(char *)a0 withEDLinks:(id)a1;
- (char)makeArrayForLastToken:(unsigned long long)a0;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(char)a0 withMin:(unsigned short)a1 andMax:(unsigned short)a2;
- (unsigned int)removeOptionalPtgArgs:(unsigned int)a0 minArgs:(unsigned int)a1;
- (void)removeTokenAtIndex:(unsigned long long)a0;
- (char)replaceArgPtgAtIndex:(unsigned int)a0 withFormula:(id)a1;
- (void)replaceStringInStringTokenAtIndex:(unsigned long long)a0 content:(id)a1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)a0 length:(unsigned int)a1;
- (char)shrinkSpanningRef:(struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)a0;
- (char)shrinkSpanningRefAtArgIndex:(unsigned int)a0;
- (id)stringFromStringTokenAtIndex:(unsigned long long)a0;
- (struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)tokenAtIndex:(unsigned long long)a0;
- (struct EDBuildablePtg { void /* function */ **x0; char *x1; int x2; unsigned int x3; unsigned short x4; struct EDBuildablePtg *x5; struct EDBuildablePtg *x6; struct EDBuildablePtg *x7; struct EDBuildablePtg *x8; BOOL x9; int x10; unsigned short x11; unsigned short x12; } *)tokenAtIndex:(unsigned long long)a0 previousToken:(struct EDBuildablePtg **)a1;
- (int)tokenTypeAtIndex:(unsigned long long)a0;
- (char)uppercaseArgAtIndex:(unsigned int)a0;
- (char)wrapArgumentsWithOperator:(int)a0 argumentCount:(unsigned int)a1 atIndex:(unsigned int)a2;

@end
