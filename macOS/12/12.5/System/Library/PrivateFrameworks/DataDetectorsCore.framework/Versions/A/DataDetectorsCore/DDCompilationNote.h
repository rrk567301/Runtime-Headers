@class NSString;

@interface DDCompilationNote : DDLocation

@property (readonly) NSString *message;
@property (readonly) int level;

+ (id)noteAtLocation:(id)a0 ofLevel:(int)a1 withFormat:(id)a2;

- (void)dealloc;
- (id)initWithLocation:(id)a0 message:(id)a1 level:(int)a2;
- (id)initWithFileName:(id)a0 position:(struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })a1 message:(id)a2 level:(int)a3;

@end
