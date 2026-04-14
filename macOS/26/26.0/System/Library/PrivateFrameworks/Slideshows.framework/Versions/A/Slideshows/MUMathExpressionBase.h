@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject {
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(struct { int x0; long long x1; long long x2; } *)a0;

- (void)_cleanup;
- (void)setLastError:(struct { int x0; long long x1; long long x2; } *)a0;
- (void)dealloc;
- (id)init;
- (id)lastError;

@end
