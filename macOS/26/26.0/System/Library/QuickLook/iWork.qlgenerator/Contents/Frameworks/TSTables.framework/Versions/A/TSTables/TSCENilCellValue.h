@interface TSCENilCellValue : TSCECellValue

- (id)initWithLocale:(id)a0;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)format;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
