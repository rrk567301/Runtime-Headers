@interface NSDecimalNumberPlaceholder : NSDecimalNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsSecureCoding;

- (oneway void)release;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithDouble:(double)a0;
- (id)initWithChar:(char)a0;
- (id)initWithInt:(int)a0;
- (id)initWithLong:(long long)a0;
- (id)initWithLongLong:(long long)a0;
- (id)initWithShort:(short)a0;
- (id)initWithUnsignedChar:(unsigned char)a0;
- (id)initWithUnsignedInt:(unsigned int)a0;
- (id)initWithUnsignedLongLong:(unsigned long long)a0;
- (id)initWithUnsignedShort:(unsigned short)a0;
- (id)initWithString:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithBool:(char)a0;
- (id)initWithDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a0;
- (id)initWithFloat:(float)a0;
- (id)initWithInteger:(long long)a0;
- (id)initWithMantissa:(unsigned long long)a0 exponent:(short)a1 isNegative:(char)a2;
- (id)initWithString:(id)a0 locale:(id)a1;
- (id)initWithUnsignedInteger:(unsigned long long)a0;
- (id)initWithUnsignedLong:(unsigned long long)a0;

@end
