@interface _NSConstantNumberFloat : _NSConstantNumber

- (const char *)objCType;
- (long long)integerValue;
- (BOOL)boolValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (char)charValue;
- (void)getValue:(void *)a0;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (long long)longLongValue;
- (unsigned int)unsignedIntValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;

@end
