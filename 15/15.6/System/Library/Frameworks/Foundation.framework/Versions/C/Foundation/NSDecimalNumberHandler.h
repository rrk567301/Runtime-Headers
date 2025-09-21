@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {
    unsigned short _scale : 16;
    unsigned char _roundingMode : 3;
    unsigned char _raiseOnExactness : 1;
    unsigned char _raiseOnOverflow : 1;
    unsigned char _raiseOnUnderflow : 1;
    unsigned char _raiseOnDivideByZero : 1;
    unsigned short _unused : 9;
    void *_reserved2;
    void *_reserved;
}

@property (class, readonly) NSDecimalNumberHandler *defaultDecimalNumberHandler;

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)a0 scale:(short)a1 raiseOnExactness:(char)a2 raiseOnOverflow:(char)a3 raiseOnUnderflow:(char)a4 raiseOnDivideByZero:(char)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)exceptionDuringOperation:(SEL)a0 error:(unsigned long long)a1 leftOperand:(id)a2 rightOperand:(id)a3;
- (id)initWithRoundingMode:(unsigned long long)a0 scale:(short)a1 raiseOnExactness:(char)a2 raiseOnOverflow:(char)a3 raiseOnUnderflow:(char)a4 raiseOnDivideByZero:(char)a5;
- (unsigned long long)roundingMode;
- (short)scale;

@end
