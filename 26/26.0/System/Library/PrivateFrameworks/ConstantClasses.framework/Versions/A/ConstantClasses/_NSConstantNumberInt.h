@interface _NSConstantNumberInt : _NSConstantNumber

- (long long)integerValue;
- (const char *)objCType;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (short)shortValue;
- (double)doubleValue;
- (long long)longLongValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned int)unsignedIntValue;
- (char)charValue;
- (unsigned long long)unsignedLongValue;
- (int)intValue;
- (long long)longValue;

@end
