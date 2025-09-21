@class NSString, BMTableSchema;
@protocol BMDSLRowTransform;

@interface BMDSLTableTransform : BMDSLBaseCodable

@property (retain, nonatomic) id<BMDSLRowTransform> rowTransform;
@property (retain, nonatomic) BMTableSchema *schema;
@property (readonly, copy, nonatomic) NSString *tableName;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRowTransform:(id)a0 schema:(id)a1 tableName:(id)a2;
- (id)initWithRowTransform:(id)a0 schema:(id)a1 tableName:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
