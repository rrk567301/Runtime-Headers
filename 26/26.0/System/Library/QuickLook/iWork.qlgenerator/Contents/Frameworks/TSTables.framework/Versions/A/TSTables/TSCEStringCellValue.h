@class TSCEStringValue;

@interface TSCEStringCellValue : TSCECellValue {
    TSCEStringValue *_stringValue;
}

- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 locale:(id)a1;
- (id)stringValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)format;
- (void)encodeToArchive:(void *)a0;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithStringValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)tsceValue;

@end
