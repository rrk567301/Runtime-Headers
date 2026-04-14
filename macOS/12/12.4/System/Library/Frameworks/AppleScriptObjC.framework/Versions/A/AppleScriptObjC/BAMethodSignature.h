@interface BAMethodSignature : BAFunctionSignature

- (unsigned long long)numberOfArguments;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)a0;
- (const char *)returnType;
- (char)getArgumentModifierAtIndex:(unsigned long long)a0;
- (void)setArgumentType:(id)a0 modifier:(id)a1 atIndex:(unsigned long long)a2;

@end
