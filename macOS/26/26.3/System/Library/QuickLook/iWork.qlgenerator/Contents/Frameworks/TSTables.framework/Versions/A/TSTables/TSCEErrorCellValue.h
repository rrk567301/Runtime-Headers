@class TSCEErrorValue;

@interface TSCEErrorCellValue : TSCECellValue {
    TSCEErrorValue *_errorValue;
}

- (id)displayString;
- (id)description;
- (id)format;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)errorValue;
- (void)encodeToArchive:(void *)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithErrorValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
