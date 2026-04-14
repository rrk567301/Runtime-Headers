@class NSString, NSMutableArray, NSData;

@interface WFREPBAskWhenRunRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *associatedRunRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *parameterKeys;
@property (retain, nonatomic) NSMutableArray *parameterKeysAndStates;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasActionSerializedParameters;
@property (retain, nonatomic) NSData *actionSerializedParameters;
@property (retain, nonatomic) NSMutableArray *possibleStates;

+ (Class)parameterKeysAndStatesType;
+ (Class)parameterKeysType;
+ (Class)possibleStatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearPossibleStates;
- (void)addParameterKeys:(id)a0;
- (void)addParameterKeysAndStates:(id)a0;
- (void)addPossibleStates:(id)a0;
- (void)clearParameterKeys;
- (void)clearParameterKeysAndStates;
- (id)parameterKeysAndStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterKeysAndStatesCount;
- (id)parameterKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterKeysCount;
- (id)possibleStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)possibleStatesCount;

@end
