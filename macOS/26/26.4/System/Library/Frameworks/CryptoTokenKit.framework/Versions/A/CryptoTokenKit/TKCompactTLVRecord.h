@interface TKCompactTLVRecord : TKTLVRecord

+ (id)parseFromDataSource:(id)a0;
+ (id)parseFromDataSource:(id)a0 nestingLevel:(unsigned long long)a1;

- (id)initWithTag:(unsigned char)a0 value:(id)a1;

@end
