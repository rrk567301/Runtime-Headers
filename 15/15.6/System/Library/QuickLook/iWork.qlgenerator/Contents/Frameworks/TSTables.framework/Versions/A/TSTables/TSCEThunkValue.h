@interface TSCEThunkValue : TSCEValue {
    struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *_AST;
}

@property (nonatomic) unsigned char rangeContextOverride;
@property (readonly, nonatomic) char hasDeepCopy;

+ (id)thunkValue:(const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (const void *)arguments;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(char)a3 outError:(id *)a4;
- (char)nativeType;
- (const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)ast;
- (char)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; char x2; char x3; char x4; })asRawRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; char x2; char x3; char x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asThunkValue;
- (id)evaluateThunk:(id)a0;
- (unsigned int)firstSymbol;
- (id)initWithAST:(const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 asDeepCopy:(char)a1;
- (unsigned long long)uniqueFunctorKey;

@end
