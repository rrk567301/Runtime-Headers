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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearPossibleStates;
- (void)addParameterKeys:(id)a0;
- (void)clearParameterKeys;
- (id)parameterKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterKeysCount;
- (void)addParameterKeysAndStates:(id)a0;
- (void)addPossibleStates:(id)a0;
- (void)clearParameterKeysAndStates;
- (id)parameterKeysAndStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterKeysAndStatesCount;
- (id)possibleStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)possibleStatesCount;

@end
