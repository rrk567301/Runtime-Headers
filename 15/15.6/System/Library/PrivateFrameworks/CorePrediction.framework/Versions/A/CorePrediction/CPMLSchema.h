@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject {
    NSMutableArray *schema;
    NSMutableArray *schemaHDef;
    NSMutableArray *_categoricalDataList;
    NSMutableArray *_replaceMissingValue;
    NSMutableArray *_matchReplaceValue;
    int yColumnPosition;
}

@property (readonly, nonatomic) NSMutableArray *attribute;
@property (readonly, nonatomic) NSMutableArray *indexColumnList;
@property (readonly, nonatomic) NSMutableString *schemaHeader;
@property (readonly, nonatomic) NSMutableString *schemaHeaderWithType;
@property (readonly, nonatomic) NSMutableArray *nsRemapTable;
@property (readonly, nonatomic) NSMutableArray *availableOptions;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)getColumnName:(unsigned long long)a0;
- (int)getColumnPosition:(id)a0;
- (int)getSchemaType:(unsigned long long)a0;
- (id)getSubstituteValue:(unsigned long long)a0;
- (unsigned long long)getTotalAttributes;
- (id)getUserDefinedCategoricalData:(unsigned long long)a0;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)a0;
- (int)getVectorContent:(unsigned long long)a0;
- (int)getYColumnPosition;
- (char)hasOptions:(unsigned long long)a0;
- (char)isColumnContinous:(unsigned int)a0;
- (char)isIntType:(unsigned long long)a0;
- (char)isNumType:(unsigned long long)a0;
- (char)isRealType:(unsigned long long)a0;
- (char)isStringType:(unsigned long long)a0;
- (char)isVectorType:(unsigned long long)a0;
- (char)matchSubstituteValue:(unsigned long long)a0 theValue:(id)a1;

@end
