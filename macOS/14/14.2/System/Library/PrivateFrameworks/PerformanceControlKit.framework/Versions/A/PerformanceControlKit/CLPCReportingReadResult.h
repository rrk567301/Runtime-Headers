@class CLPCReportingRows;

@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 7UL> { CLPCReportingRows *__elems_[7]; } rows_by_schema;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerate:(id /* block */)a0;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)a0 error:(id *)a1;
- (id)rowsForSchemaID:(unsigned long long)a0 error:(id *)a1;

@end
