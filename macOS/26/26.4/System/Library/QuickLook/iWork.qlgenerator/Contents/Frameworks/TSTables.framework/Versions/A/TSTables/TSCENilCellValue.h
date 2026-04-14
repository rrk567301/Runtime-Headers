@interface TSCENilCellValue : TSCECellValue

- (id)format;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
