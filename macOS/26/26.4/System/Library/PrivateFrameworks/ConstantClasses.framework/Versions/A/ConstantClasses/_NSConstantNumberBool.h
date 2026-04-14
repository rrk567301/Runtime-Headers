@interface _NSConstantNumberBool : _NSConstantNumber

- (void)getValue:(void *)a0;
- (unsigned int)unsignedIntValue;
- (const char *)objCType;
- (char)charValue;
- (long long)longLongValue;
- (double)doubleValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (long long)integerValue;
- (short)shortValue;
- (int)intValue;
- (long long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (float)floatValue;
- (unsigned short)unsignedShortValue;

@end
