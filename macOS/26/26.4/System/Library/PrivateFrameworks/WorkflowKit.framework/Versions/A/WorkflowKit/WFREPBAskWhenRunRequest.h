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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
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
