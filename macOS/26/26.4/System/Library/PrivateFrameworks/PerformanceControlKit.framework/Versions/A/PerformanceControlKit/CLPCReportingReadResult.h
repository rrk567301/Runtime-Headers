@class CLPCReportingRows;

@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 12UL> { CLPCReportingRows *__elems_[12]; } rows_by_schema;
}

- (void)enumerate:(id /* block */)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)a0 error:(id *)a1;
- (id)rowsForSchemaID:(unsigned long long)a0 error:(id *)a1;

@end
