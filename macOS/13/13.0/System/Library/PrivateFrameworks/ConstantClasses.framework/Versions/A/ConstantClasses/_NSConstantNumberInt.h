@interface _NSConstantNumberInt : _NSConstantNumber

- (unsigned int)unsignedIntValue;
- (long long)longLongValue;
- (long long)longValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (BOOL)boolValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;

@end
