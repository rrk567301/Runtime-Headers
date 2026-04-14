@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject {
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(struct { int x0; long long x1; long long x2; } *)a0;

- (void)_cleanup;
- (void)setLastError:(struct { int x0; long long x1; long long x2; } *)a0;
- (id)lastError;
- (void)dealloc;
- (id)init;

@end
