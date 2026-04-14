@class NSString, NSMutableArray, WFREPBError;

@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *inputtedStates;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

+ (Class)inputtedStatesType;

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
- (void)clearInputtedStates;
- (void)addInputtedStates:(id)a0;
- (unsigned long long)inputtedStatesCount;
- (id)inputtedStatesAtIndex:(unsigned long long)a0;

@end
