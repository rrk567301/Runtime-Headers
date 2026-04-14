@class NSString, NSMutableArray, NSData;

@interface WFREPBRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *runRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *variablesDatas;
@property (retain, nonatomic) NSMutableArray *outputDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)variablesDataType;
+ (Class)outputDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addVariablesData:(id)a0;
- (void)addOutputData:(id)a0;
- (unsigned long long)variablesDatasCount;
- (void)clearVariablesDatas;
- (id)variablesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDatasCount;
- (void)clearOutputDatas;
- (id)outputDataAtIndex:(unsigned long long)a0;

@end
