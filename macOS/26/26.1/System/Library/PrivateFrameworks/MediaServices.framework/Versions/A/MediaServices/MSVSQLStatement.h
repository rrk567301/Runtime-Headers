@class _MSVSQLConnection, MSVSQLDatabaseTransaction;

@interface MSVSQLStatement : NSObject {
    struct sqlite3_stmt { } *_statementHandle;
    _MSVSQLConnection *_connection;
    MSVSQLDatabaseTransaction *_implicitTransaction;
}

- (void)bindFloatValue:(float)a0 toParameterNamed:(id)a1;
- (void)_bindNoCopyDataValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindBoolValue:(BOOL)a0 toParameterAtIndex:(long long)a1;
- (void)bindFloatValue:(float)a0 toParameterAtIndex:(long long)a1;
- (void)_bindNoCopyStringValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)_bindNoCopyStringValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindStringValue:(id)a0 toParameterNamed:(id)a1;
- (void)_bindInt32Array:(int *)a0 length:(long long)a1 toParameterNamed:(id)a2;
- (void)invalidate;
- (void)bindNullValueToParameterNamed:(id)a0;
- (void)_bindInt64Array:(long long *)a0 length:(long long)a1 toParameterNamed:(id)a2;
- (BOOL)bindJSONValue:(id)a0 toParameterNamed:(id)a1 error:(id *)a2;
- (void)bindStringValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindDoubleValue:(double)a0 toParameterAtIndex:(long long)a1;
- (void)bindDateValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindBoolValue:(BOOL)a0 toParameterNamed:(id)a1;
- (void)_bindDoubleArray:(double *)a0 length:(long long)a1 toParameterNamed:(id)a2;
- (void)bindDataValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindInt64Value:(long long)a0 toParameterNamed:(id)a1;
- (void)bindUInt64Value:(unsigned long long)a0 toParameterAtIndex:(long long)a1;
- (void)_bindVariantArray:(struct { unsigned char x0; union { long long x0; double x1; id x2; } x1; long long x2; } *)a0 length:(long long)a1 toParameterAtIndex:(long long)a2;
- (void)bindDateValue:(id)a0 toParameterNamed:(id)a1;
- (id)description;
- (void)bindDataValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindInt64Value:(long long)a0 toParameterAtIndex:(long long)a1;
- (void)dealloc;
- (void)bindUInt64Value:(unsigned long long)a0 toParameterNamed:(id)a1;
- (void)reset;
- (void)bindDoubleValue:(double)a0 toParameterNamed:(id)a1;
- (BOOL)bindJSONConvertible:(id)a0 toParameterNamed:(id)a1 error:(id *)a2;
- (void)_bindVariantArray:(struct { unsigned char x0; union { long long x0; double x1; id x2; } x1; long long x2; } *)a0 length:(long long)a1 toParameterNamed:(id)a2;
- (void)_bindInt64Array:(long long *)a0 length:(long long)a1 toParameterAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)bindNullValueToParameterAtIndex:(long long)a0;
- (void)_bindCStringArray:(const char **)a0 length:(long long)a1 toParameterNamed:(id)a2;
- (void)_bindDoubleArray:(double *)a0 length:(long long)a1 toParameterAtIndex:(long long)a2;
- (void)_bindNoCopyDataValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindFunctionContext:(id)a0 toParameterNamed:(id)a1;
- (BOOL)bindJSONValue:(id)a0 toParameterAtIndex:(long long)a1 error:(id *)a2;
- (void)_bindInt32Array:(int *)a0 length:(long long)a1 toParameterAtIndex:(long long)a2;
- (BOOL)bindJSONConvertible:(id)a0 toParameterAtIndex:(long long)a1 error:(id *)a2;
- (void)_bindCStringArray:(const char **)a0 length:(long long)a1 toParameterAtIndex:(long long)a2;
- (void)bindFunctionContext:(id)a0 toParameterAtIndex:(long long)a1;

@end
