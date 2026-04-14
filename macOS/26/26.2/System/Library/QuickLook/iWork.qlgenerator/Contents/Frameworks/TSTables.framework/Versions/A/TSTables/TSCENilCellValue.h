@interface TSCENilCellValue : TSCECellValue

- (id)displayString;
- (id)format;
- (id)initWithLocale:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
