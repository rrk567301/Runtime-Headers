@interface FIMutableNodePropertyList : FINodePropertyList

- (BOOL)setAsIconRef:(struct OpaqueIconRef { } *)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeProperty:(unsigned int)a0 error:(id *)a1;
- (BOOL)setAsArray:(id)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsBool:(BOOL)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsData:(id)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsData:(void *)a0 size:(unsigned int)a1 forProperty:(unsigned int)a2 error:(id *)a3;
- (BOOL)setAsDate:(id)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsInt16:(short)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsInt32:(int)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsInt64:(long long)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsInt8:(char)a0 forProperty:(unsigned int)a1 error:(id *)a2;
- (BOOL)setAsString:(id)a0 forProperty:(unsigned int)a1 error:(id *)a2;

@end
