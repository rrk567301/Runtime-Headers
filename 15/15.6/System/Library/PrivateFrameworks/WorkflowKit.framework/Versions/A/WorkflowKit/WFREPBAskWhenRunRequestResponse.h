@class NSString, NSMutableArray, WFREPBError;

@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *inputtedStates;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) WFREPBError *error;

+ (Class)inputtedStatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInputtedStates:(id)a0;
- (void)clearInputtedStates;
- (id)inputtedStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)inputtedStatesCount;

@end
