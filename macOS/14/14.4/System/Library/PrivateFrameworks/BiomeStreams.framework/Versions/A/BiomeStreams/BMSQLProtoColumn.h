@interface BMSQLProtoColumn : BMSQLColumn

@property (readonly, nonatomic) long long fieldNumber;
@property (readonly, nonatomic) long long protoDataType;
@property (readonly, nonatomic) long long convertedType;

+ (id)extractValueFromProtoData:(id)a0 fieldNumber:(long long)a1 type:(long long)a2 error:(id *)a3;
+ (id)extractValuesFromProtoData:(id)a0 fieldNumber:(long long)a1 type:(long long)a2 error:(id *)a3;

- (id)description;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 fieldNumber:(long long)a3 protoDataType:(long long)a4 convertedType:(long long)a5;

@end
