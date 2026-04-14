@interface TSCENilCellValue : TSCECellValue

- (unsigned long long)hash;
- (id)format;
- (id)displayString;
- (id)initWithLocale:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
