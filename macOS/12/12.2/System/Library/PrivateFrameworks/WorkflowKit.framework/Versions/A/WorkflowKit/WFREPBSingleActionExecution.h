@class NSString, NSMutableArray, NSData;

@interface WFREPBSingleActionExecution : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSMutableArray *variables;
@property (retain, nonatomic) NSMutableArray *processedParameters;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSMutableArray *inputs;

+ (Class)inputType;
+ (Class)variablesType;
+ (Class)processedParametersType;

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
- (void)addInput:(id)a0;
- (unsigned long long)inputsCount;
- (void)addVariables:(id)a0;
- (void)clearInputs;
- (void)clearVariables;
- (unsigned long long)variablesCount;
- (id)variablesAtIndex:(unsigned long long)a0;
- (void)clearProcessedParameters;
- (void)addProcessedParameters:(id)a0;
- (unsigned long long)processedParametersCount;
- (id)processedParametersAtIndex:(unsigned long long)a0;
- (id)inputAtIndex:(unsigned long long)a0;

@end
