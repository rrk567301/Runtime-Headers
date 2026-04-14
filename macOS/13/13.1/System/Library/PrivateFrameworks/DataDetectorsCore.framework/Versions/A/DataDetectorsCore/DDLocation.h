@class NSString;

@interface DDLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *fileName;
@property (readonly) int firstLine;
@property (readonly) int firstColumn;
@property (readonly) int lastLine;
@property (readonly) int lastColumn;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })position;
- (id)initWithFileName:(id)a0 firstLine:(int)a1 firstColumn:(int)a2 lastLine:(int)a3 lastColumn:(int)a4;
- (id)initWithFileName:(id)a0 position:(struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })a1;

@end
