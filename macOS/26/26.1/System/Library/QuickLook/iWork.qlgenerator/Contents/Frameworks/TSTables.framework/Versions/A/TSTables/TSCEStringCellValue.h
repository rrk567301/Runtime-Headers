@class TSCEStringValue;

@interface TSCEStringCellValue : TSCECellValue {
    TSCEStringValue *_stringValue;
}

- (id)initWithString:(id)a0 locale:(id)a1;
- (unsigned long long)hash;
- (id)stringValue;
- (id)format;
- (id)displayString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeToArchive:(void *)a0;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithStringValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)tsceValue;

@end
