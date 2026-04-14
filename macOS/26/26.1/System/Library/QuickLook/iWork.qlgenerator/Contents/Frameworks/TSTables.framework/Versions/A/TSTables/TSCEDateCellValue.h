@class TSCEDateValue;

@interface TSCEDateCellValue : TSCECellValue {
    TSCEDateValue *_dateValue;
}

- (id)dateValue;
- (unsigned long long)hash;
- (id)format;
- (id)displayString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeToArchive:(void *)a0;
- (id)asDate;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithDate:(id)a0 locale:(id)a1;
- (id)initWithDateValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)tsceValue;

@end
