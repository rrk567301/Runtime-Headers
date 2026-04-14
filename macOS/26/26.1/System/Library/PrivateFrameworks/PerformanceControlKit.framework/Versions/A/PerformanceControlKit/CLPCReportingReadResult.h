@class CLPCReportingRows;

@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 11UL> { CLPCReportingRows *__elems_[11]; } rows_by_schema;
}

- (void)enumerate:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)a0 error:(id *)a1;
- (id)rowsForSchemaID:(unsigned long long)a0 error:(id *)a1;

@end
