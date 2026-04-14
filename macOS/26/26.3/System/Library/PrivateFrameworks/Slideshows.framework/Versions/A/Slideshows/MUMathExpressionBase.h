@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject {
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(struct { int x0; long long x1; long long x2; } *)a0;

- (void)setLastError:(struct { int x0; long long x1; long long x2; } *)a0;
- (id)lastError;
- (void)_cleanup;
- (id)init;
- (void)dealloc;

@end
