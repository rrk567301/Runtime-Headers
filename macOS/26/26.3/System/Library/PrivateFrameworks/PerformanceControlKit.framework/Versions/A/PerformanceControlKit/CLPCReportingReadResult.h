@class CLPCReportingRows;

@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 11UL> { CLPCReportingRows *__elems_[11]; } rows_by_schema;
}

- (id)debugDescription;
- (void)enumerate:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)a0 error:(id *)a1;
- (id)rowsForSchemaID:(unsigned long long)a0 error:(id *)a1;

@end
