@class NSString, NSMutableArray, NSData;

@interface WFREPBAskWhenRunRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *associatedRunRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *parameterKeys;
@property (retain, nonatomic) NSMutableArray *parameterKeysAndStates;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasActionSerializedParameters;
@property (retain, nonatomic) NSData *actionSerializedParameters;
@property (retain, nonatomic) NSMutableArray *possibleStates;

+ (Class)parameterKeysType;
+ (Class)parameterKeysAndStatesType;
+ (Class)possibleStatesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPossibleStates;
- (void)clearParameterKeys;
- (void)addParameterKeys:(id)a0;
- (unsigned long long)parameterKeysCount;
- (id)parameterKeysAtIndex:(unsigned long long)a0;
- (void)clearParameterKeysAndStates;
- (void)addParameterKeysAndStates:(id)a0;
- (unsigned long long)parameterKeysAndStatesCount;
- (id)parameterKeysAndStatesAtIndex:(unsigned long long)a0;
- (void)addPossibleStates:(id)a0;
- (unsigned long long)possibleStatesCount;
- (id)possibleStatesAtIndex:(unsigned long long)a0;

@end
